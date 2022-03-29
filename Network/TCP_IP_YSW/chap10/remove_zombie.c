// modified version
//
// made to reap all pending terminated chlidren

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void reap_childproc(int sig)
{
  int status;
  pid_t pid;

  while ((pid = waitpid(-1, &status, WNOHANG)) > 0) {
    if (WIFEXITED(status)) {
      printf("Child %d terminated with exit status %d.\n", pid, WEXITSTATUS(status));
    } else {
      printf("Child %d terminated abnormally.\n", pid);
    }
  }
}

int main (int argc, char *argv[])
{
  pid_t pid;
  struct sigaction act;
  act.sa_handler = reap_childproc;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;

  sigaction(SIGCHLD, &act, NULL);

  pid = fork();
  if (pid == 0)
  {
    puts("Hi! I'm child process");
    sleep(10);
    return 12;
  }
  else {
    printf("Child proc id: %d \n", pid);
    pid = fork();
    if(pid == 0)
    {
      puts("Hi! I'm child process");
      sleep(10);
      exit(24);
    }
    else 
    {
      int i;
      printf("Child proc id: %d \n", pid);
      for (i = 0; i < 5; i++) 
      {
        puts("wait...");
        sleep(5);
      }
    }
  }



  return 0;
}
