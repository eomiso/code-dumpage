#include <stdio.h>
#include <map>

int main(void) {
  int a, b, c;

  std::map<int, int> m;  

  for (int i = 0; i < 10; i++) {
    m[i] = 0;    
  }

  scanf("%d %d %d", &a, &b, &c);

  int tot = a*b*c;
  int div = 1;

  //printf("%d\n", tot);

  while ( tot % div != tot ) {
    //printf("%d ", tot / div);
    m[(tot / div) % 10] += 1;
    div *= 10;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", m[i]);
  }
}
