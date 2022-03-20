#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int dpCoins(int *coins, int len, int target) {
  vector<int> cache(target+1, 0);
  // for (int i: cache)
  //   cout << i << ' ';
  // cout << '\n';
  int tmp;
  int coinIdx;
  int coinLen = len;
  cout << "CoinLen: " << coinLen << '\n';

  for (int i = 1; i <= target; i++) {
    tmp = INT_MAX;
    coinIdx = 0;
    for (int j: cache)
      cout << j << ' ';
    cout << '\n';

    if (i < coins[coinIdx]) {cout << "cointinue\n"; continue;}

    while (coinIdx < coinLen && i >= coins[coinIdx]) {
      //cout << "Cache index: " << i - coins[coinIdx] << '\n';
      tmp = min( cache[i - coins[coinIdx]], tmp );
      coinIdx++;
    }
    //cout << "tmp: " << tmp << '\n';

    cache[i] = tmp + 1;
  }

  return cache[target];
}

int main (int argc, char *argv[])
{

  if (argc == 1) {
    cout << "You need to an array of coins as arguments\n";
    cout << "example <bin> 4 6 10 23\n";
    return 1;
  }

  int coins[argc - 1];
  for (int i = 1; i < argc; i++) {
    coins[i-1] = atoi(argv[i]);
  }
  
  sort(coins, coins + argc-1);

  for (int i = 0; i < argc - 1; i++) {
    cout << coins[i] << ' '; 
  }
  cout << '\n';

  int target;
  cout << "Target amount: ";
  cin >> target;
  cout << "Target: " << target << '\n';

  cout << "Smallest number of coins: " << dpCoins(coins, argc-1, target)<< '\n';

  return 0;
}


