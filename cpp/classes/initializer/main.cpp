#include <iostream>


using namespace std;
class Animal {
  public:
    int m_age;
    Animal() {
      cout << "괴랄한 애니멀 생성자 호출" << '\n';
      m_age = 0;
    }
    Animal(int num): m_age(num) { 
      cout << "괴랄한 애니멀(숫자) 생성자 호출" << '\n'; 
    }
};
class Human: public Animal {
  public:
    string name;
    Human() {
      cout << "괴랄한 휴먼 생성자 호출" << '\n';
      //m_age = 0;
    }
    Human(string s): name(s) {
      cout << "괴랄한 휴먼(문자열) 생성자 호출" << '\n';
    }
    Human(string s, int age): name(s), Animal(age) {
      cout << "괴랄한 휴먼(문자열, 숫자) 생성자 호출" << '\n';
    }
};

int main(void) {
  Animal a(3);
  cout << a.m_age << endl;
  Human b("사람");
  cout <<  b.name << endl;
  Human c("사람2", 60);
  Human d;
}
