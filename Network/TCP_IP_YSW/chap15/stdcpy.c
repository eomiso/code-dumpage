#include <stdio.h>
#include "util.h"

#define BUF_SIZE 10

int main (int argc, char *argv[])
{
  FILE *fp1;
  FILE *fp2;
  double time;
  char buf[BUF_SIZE];

  fp1 = fopen("random.txt", "r");
  fp2 = fopen("cpy.txt", "w");
  
  timer_start(1);
  while(fgets(buf, BUF_SIZE, fp1) != NULL)
    fputs(buf, fp2);
  time = timer_stop(1);

  printf("Total time: %lf\n", time); // 실험결과 50 배 차이남을 확인했다.

  fclose(fp1);
  fclose(fp2);
  return 0;
}
