#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  pid_t pid = fork();

  if (pid == 0) {
    printf("[%5d] child exits\n", getpid());
    exit(EXIT_SUCCESS);
  } else if (pid > 0) {
    printf("[%5d] parent runs\n", getpid());
    while (1); // infinite loop cannot reap child
  }
  return 0;
}
