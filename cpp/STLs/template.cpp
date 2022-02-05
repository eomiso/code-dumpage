#include <iostream>

using namespace std;


template <typename T>
T add(T a, T b){
  return a + b;
}

int main() {
  int a = 1, b = 2;
  float c = 1.2, d = 3.4;

  cout << add(a, b) << endl;
  cout << add(c, d) << endl;

}
