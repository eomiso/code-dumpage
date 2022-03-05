#include <iostream>

using namespace std;

class Parent {
public:
  virtual void show() { cout << "In Parent \n"; }
};

class Child: public Parent {
  void show() { cout << "In Child \n"; }
};

int main(void) {
  Parent *bp = new Child; // assignment operator (대입 연산자) =

  bp->show(); // g++ ... ./a.out 
}
