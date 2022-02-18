#include <iostream>

int main(void) {
    const char *str = "\\    /\\\n" " )  ( ')\n" "(  /  )\n" " \(__)|\n";
    std::cout << str;

    std::cout << "========" << std::endl;

    const char *str2 = "|\\_/|\n"
"|q p|   /}\n"
"( 0 )\"\"\"\\\n"
"|\"^\"`    |\n"
"||_/=\\\\__|\n";
    std::cout << str2;


    return 0;
}
