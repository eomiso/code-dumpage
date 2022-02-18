#include "animal.h"
#include <string>

class Human: public Animal {
public:
  Human();
  Human(string name);
  ~Human();

  void run();
};
