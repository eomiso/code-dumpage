#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "util.h"

#define BUF_SIZE 10 // 배열의 길이는 작게

int main (int argc, char *argv[])
{
  int fd1, fd2;
  int len;
  char buf[BUF_SIZE];
  double time;

  fd1 = open("random.txt", O_RDONLY);
  fd2 = open("cpy.txt", O_WRONLY | O_CREAT | O_TRUNC);

  
  timer_start(1);
  while((len = read(fd1, buf, sizeof(buf))) > 0)
    write(fd2, buf, len);
  time = timer_stop(1);

  printf("Total time: %lf\n", time);

  return 0;
}
