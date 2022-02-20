#include <iostream>
#include <string>

int main(void) 
{
  size_t pos = 0;
  std::string line;

  std::string delim = " ";
  std::getline(std::cin, line);
  std::cout << line << std::endl;

  while ((pos = line.find(delim)) != std::string::npos) {
    std::string token = line.substr(0, pos);
    std::cout << token << std::endl;
    line.erase(0, pos + delim.length());
  }

  return 0;
}
