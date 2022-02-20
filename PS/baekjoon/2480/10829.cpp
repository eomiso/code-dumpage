#include <stdio.h>

int main(void) {
    unsigned long long num;
    scanf("%lld", &num);
    
    auto a = num;
    unsigned long long k = 1;
    int i = 0;

    while ( a >= k ) {
      k = k << 1;
      i += 1;
    }
    k = k >> 1;
    i -= 1;

    while ( k != 0 ) {
      printf("%lld", (num & k) >> i);
      k = k >> 1;
      i -= 1;
    }
}
