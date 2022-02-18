#include "animal.h"
#include <iostream>

Animal::Animal() {
  name = "No name";
  cout << "Animal " << name <<" constructor called\n";
}

Animal::Animal(string name): name(name) {
  cout << "Animal " << name <<" constructor with member initialization called\n";
}

Animal::~Animal() {
  cout << "Animal " << name << " destructor called\n";
}
