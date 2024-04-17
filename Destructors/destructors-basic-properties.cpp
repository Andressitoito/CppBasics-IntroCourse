#include <iostream>
using namespace std;

class A {
 int* p;
 int b;

public:
 // Destructor of class A
 ~A() {
  /*
  Properties of a destructor
  1 - No return type
  2 - Have no arguments
  3 - They must be alays in the public section
  4 - They must be created in this way -> ~"-->replace here actual
  class name<--" 5 - There is no need to call, they are invoked on its
  own 6 - There is only one destructor for a class
  */
 }
};

class Sample {
public:
 Sample() { std::cout << "In constructor" << std::endl; }
 ~Sample() { std::cout << "In destructor" << std::endl; }
};

int main() {
 A a;

 Sample sample;
 std::cout << "Hello World" << std::endl;

 return 0;
}