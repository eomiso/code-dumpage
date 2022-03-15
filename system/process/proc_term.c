#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void cleanup1(void)
{
  printf("[%5d], cleanup1\n", getpid());
}

void cleanup2(void)
{
  printf("[%5d], cleanup2\n", getpid());
}

int main (int argc, char *argv[])
{
  atexit(cleanup1);
  atexit(cleanup2);

  fork();
  return 0;
}
