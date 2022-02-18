#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <cstdlib>
#include <string>

using namespace std;
class Animal {
  public:
    Animal();
    Animal(string name);
    ~Animal();

    string name;
    void run();
};

#endif
