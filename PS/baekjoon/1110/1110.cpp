#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);
  
  int target = num;
  int cnt = 0;

  int tens, ones;
  do {
    ones= (target / 10 + target % 10) % 10;
    tens = (target % 10) * 10;
    target = tens + ones;

    cnt += 1;
  } while (target != num);

  printf("%d\n", cnt);
}
