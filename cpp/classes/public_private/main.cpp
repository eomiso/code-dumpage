#include <iostream>
#include <string>

using namespace std;

class Animal {
  private:
    int m_age = 30;
};

class Human: public Animal {
  public:
    string name = "HUMAN";
    int human_age = 3 + m_age;
};

int main (void) {
  Animal a;
  cout << a.m_age << '\n';

  Human b;
  cout << b.m_age << '\n';
  //cout << b.name << ' ' << b.human_age << '\n'; // b.m_age
}
