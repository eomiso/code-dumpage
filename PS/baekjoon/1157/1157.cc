#include <iostream>
#include <map>

using namespace std;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string in;

  cin >> in;
  map<char, int> m;
  char diff = 'A' - 'a';

  for (char c = 'A'; c <= 'Z'; c++) {
    m[c] = -1;
  }

  for (auto c: in) {
    if (c >= 'a' && c <= 'z') {
      c += diff;
    }
    m[c] += 1;
  }


  char max_char = '\0';
  int max = -1;

  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second > max) {
      max_char = it->first;
      max = it->second;
    }
    else if (it->second == max) {
      max_char = '?';
    }
  }
  cout << max_char << '\n';
}
