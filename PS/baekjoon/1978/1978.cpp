#include <stdio.h>
#include <cmath>

int isPrime(int n) {
  if ( n == 1 ) return 0;
  for (int i = 2; i <= std::sqrt(n); i++) {
    if (n % i == 0) return 0; 
  }

  return 1;
}

int main(void) {
  int size, n, cnt = 0;
  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    scanf("%d", &n);
    if (isPrime(n)) cnt++;
  }
  printf("%d\n", cnt);
}
