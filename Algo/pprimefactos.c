#include <stdio.h>

void pprimefactors(int n);

int main(int argc, char *argv[]) {
  printf("%d = ", 0);
  pprimefactors(0);
  printf("\n");
  return 0;
}

void pprimefactors(int n) {
  int i = 2;
  int flag = 0;
  while (n != 1) {
    if (n % i == 0) {
      while (n % i == 0) {
        if (!flag)
          printf("%d", i);
        else
          printf(" * %d", i);
        n /= i;
        flag = 1;
      }
    }
    i++;
  }
}
