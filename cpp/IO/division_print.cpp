#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
  int a, b;
  cin >> a; cin >> b;

  cout << setprecision(9) << double(a) / double(b);

  return 0;
}
