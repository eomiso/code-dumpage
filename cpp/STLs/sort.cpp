#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v = { 42, 34, 25, 100, 1 };

vector<int>::iterator it;

sort(v.begin(), v.end(), less<int>());

