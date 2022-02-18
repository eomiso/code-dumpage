#include "human.h"
#include <iostream>
#include <string>

using namespace std;

Human::Human(string name): Animal(name) {
  cout << "Human constructor " << name << " is called\n";
}

Human::~Human() {
  cout << "Human destructor " << name << "is called\n";
}
