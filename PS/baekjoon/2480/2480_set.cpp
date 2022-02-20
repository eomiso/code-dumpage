#include <iostream>
#include <set>

using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  
  set<int> s; 
  s.insert(a);
  s.insert(b);
  s.insert(c);

  int len = s.size();

  if (len == 1) {
    cout << *s.begin() * 1000 + 10000;
  } else if (len == 3) {
    cout << *s.rbegin() * 100;
  } else {
    cout << 
    (a==b)* (a * 100 + 1000) + 
    (b==c)* (b * 100 + 1000) + 
    (a==c)* (a * 100 + 1000);
  }
}
