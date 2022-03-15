#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  pid_t pid = fork();

  if (pid == 0) {
    printf("[%5d] child runs\n", getpid());
    while (1); // infinite loop
    /* this child process sill active after parent is finished */
  } else if (pid > 0) {
    printf("[%5d] parent exits\n", getpid());
    exit(EXIT_SUCCESS);
  }
  return 0;
}

