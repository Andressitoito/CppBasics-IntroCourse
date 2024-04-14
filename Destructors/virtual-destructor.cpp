#include <iostream>
using namespace std;

class Base {
public:
 Base() { std::cout << "Base constructor" << std::endl; }
 virtual ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base {
public:
 Derived() { std::cout << "Derived constructor" << std::endl; }
 ~Derived() { std::cout << "Derived destructor" << std::endl; }
};

int main(void) {
 Base *base = new Derived();
 Derived *derived = new Base();
 delete base;

 return 0;
}