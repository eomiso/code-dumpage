#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  pid_t pid = fork(); 

  if (pid == -1)
    return EXIT_FAILURE;

  if (pid == 0) {
    printf("[%5d hello from child. \n", getpid());
  } else {
    int status;
    printf("[%5d] hello from parent. \n", getpid());
    wait(&status);
    printf("[%5d] child %d has terminated with status %d.\n", getpid(), pid, WEXITSTATUS(status));
  }
  return EXIT_SUCCESS;
}
