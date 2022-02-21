#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(void) 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    vector<int> v;
    for (int i = 0; i< 9; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    auto idx = max_element(v.begin(), v.end());
    cout << *idx << '\n' << idx - v.begin();
}
