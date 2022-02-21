#include <iostream>
#include <stdio.h>
#include <vector>

#include <algorithm>

int main(void) {
  int size, num;
  //std::cin >> size;
  scanf("%d", &size);

  std::vector<int> vec;


  for (int i = 0; i < size; i++) {
    scanf("%d", &num);
    vec.push_back(num);
  }

  const auto res = std::minmax_element(begin(vec), end(vec));
  printf("%d %d\n", *std::get<0>(res), *std::get<1>(res) );
  //std::cout << *res.first << ' ' << *res.second;
}

