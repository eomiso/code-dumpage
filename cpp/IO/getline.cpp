#include <iostream>
#include <string>

int main(void) {
  std::string line;
  while (std::getline(std::cin, line))
  {
    if (!line.length()) { break; }
    std::cout << line << std::endl;
  }

  return 0;
}
