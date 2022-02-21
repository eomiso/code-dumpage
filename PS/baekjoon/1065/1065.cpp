#include <stdio.h>

int getHundred(int num);
int getTen(int num);
int getOne(int num);

int main(void) {
  int num;

  scanf("%d", &num);

  if (num == 1000) num += 1;

  int a, b, c;
  int cnt = 0;
  for (int i = 1; i <= num; i++) {
    if ( i >= 100) {
      a = getHundred(i);
      b = getTen(i); 
      c = getOne(i);
    } else if ( i >= 10 ) {
      a = -1;
      b = getTen(i);
      c = getOne(i);
    } else {
      a = -1;
      b = -1;
      c = getOne(i);
    }

    if (a == -1 && b == -1) {
      cnt += 1;
    } else if (a == -1) {
      cnt += 1;
    } else {
      cnt += ((a - b) == (b - c));
    }
  }
  printf("%d\n", cnt);
}

int getHundred(int num) {
  return num / 100;
}

int getTen(int num) {
  return (num % 100)/10;
}

int getOne(int num) {
  return num % 10;
}
