#include <stdio.h>
#include <set>

using namespace std;
int main(void) {
  int num;

  set<int> s; 
  for (int i = 0; i < 10; i++) {
    scanf("%d", &num);
    s.insert(num % 42);
  }
  printf("%lu\n", s.size());
}
