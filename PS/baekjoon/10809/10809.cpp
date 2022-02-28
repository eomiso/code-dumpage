#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input;
  map<char, int> m;
  
  cin >> input;
  for (char c = 'a'; c <= 'z'; c++) {
    m[c] = input.find(c);
  }

  for (char c = 'a'; c <= 'z'; c++) {
    cout << m[c] << ' ';
  }
}
