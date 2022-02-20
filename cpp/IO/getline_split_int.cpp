#include <iostream>
#include <string>
#include <vector>

int main(void) {
  std::string line;
  std::string token;
  std::string delimiter = " ";

  std::getline(std::cin, line);

  size_t last = 0;
  size_t next;

  std::vector<int> v;


  while ((next = line.find(delimiter, last)) != std::string::npos )
  {
    std::cout << line.substr(last, next-last) << std::endl;
    v.push_back(std::stoi(line.substr(last, next-last)));
    last = next + 1;
  }

  std::cout << line.substr(last, next-last) << std::endl;
  v.push_back(std::stoi(line.substr(last, next-last)));

  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << "\n";

  int sum = 0;
  for (auto e: v) {
    sum += e;
  }

  std::cout << sum << "\n";


  return 0;
}
