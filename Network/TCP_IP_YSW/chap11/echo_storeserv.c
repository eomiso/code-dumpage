#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <wait.h>

#define BUF_SIZE 100
#define READ  0
#define WRITE 1

void error_handling(char *msg);
void reap_childproc(int sig);


int main (int argc, char *argv[])
{
  int serv_sock, clnt_sock;
  struct sockaddr_in serv_addr, clnt_addr;

  int fds[2];

  pid_t pid;
  struct sigaction act;
  socklen_t adr_sz;
  int str_len, state;
  char buf[BUF_SIZE];

  act.sa_handler = reap_childproc;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGCHLD, &act, 0);

  if(argc != 2) {
    printf("Usage: %s <port>\n", argv[0]);
  }

  serv_sock = socket(PF_INET, SOCK_STREAM, 0);
  if (serv_sock  == -1)
    error_handling("socket() error");

  memset(&serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  serv_addr.sin_port = htons(atoi(argv[1]));
  
  if (bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
    error_handling("bind() error");
  if (listen(serv_sock, 5) == -1)
    error_handling("listen() error");
    
  pipe(fds);
  pid = fork();

  if (pid == 0) {
    //close(fds[WRITE]);
    FILE *fp = fopen("echomsg.txt", "wt");
    char msgbuf[BUF_SIZE];
    int i, len;

    for (i = 0; i < 10; i++)
    {
      len = read(fds[READ], msgbuf, BUF_SIZE);
      fwrite((void*)msgbuf, 1, len, fp);
    }
    fclose(fp);
    return 0;
  }

  while(1) {
    adr_sz = sizeof(clnt_addr);
    clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &adr_sz);
    if(clnt_sock == -1)
      continue;
    else
      puts("new client connected...");

    pid = fork();
    if (pid == 0)
    {
      close(serv_sock);
      //close(fds[READ]);
      while((str_len = read(clnt_sock, buf, BUF_SIZE)) != 0) {
        write(clnt_sock, buf, str_len);
        write(fds[WRITE], buf, str_len);
      }

      close(clnt_sock);
      puts("client disconnected...");
      return 0;
    }
    else 
      close(clnt_sock);
  }
  close(serv_sock);
  return 0;
}

void reap_childproc(int sig) {
  pid_t pid;
  int status;
  while ((pid = waitpid(-1, &status, WNOHANG)) > 0) {
    printf("removed proc id: %d\n", pid);
  }
}

void error_handling(char *msg) {
  fputs(msg, stderr);
  fputc('\n', stderr);
  exit(1);
}