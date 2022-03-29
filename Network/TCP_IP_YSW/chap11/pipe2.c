#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 30
#define READ 0
#define WRITE  1

int main(int argc, char *argv[])
{
  int fds[2];
  char str1[] = "Who are you?";
  char str2[] = "Tahnk you for your message";
  char buf[BUF_SIZE];
  pid_t pid;

  pipe(fds);
  pid = fork();

  if(pid == 0)
  {
    write(fds[WRITE], str1, sizeof(str1));
    // sleep(2);
    read(fds[READ], buf, BUF_SIZE);
    printf("Child proc output: %s \n", buf);
  }
  else 
  {
    read(fds[READ], buf, BUF_SIZE);
    printf("Parent proc output: %s\n", buf);
    write(fds[WRITE], str2, sizeof(str2));
    sleep(3);
  }

  return 0;
}
