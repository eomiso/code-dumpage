#include <iostream>
#include <string>

using namespace std;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int size;
  int repeat;
  string str;
  string outstr;
  cin >> size;


  for (int i = 0; i < size; i++)
  {
    cin >> repeat >> str;
    for (auto c: str) {
      for (int j = 0; j < repeat; j++) {
        outstr.push_back(c);
      }
    }
    cout << outstr << '\n';
    outstr.clear();
  }
}
