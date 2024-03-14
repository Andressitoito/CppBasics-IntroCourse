#include <iostream>
using namespace std;

class Vehicle {
public:
 string color;

 virtual void print() { std::cout << "Vehicle" << std::endl; }
}; 

class Car : public Vehicle {
public:
 int numGears;
 void print() { std::cout << "Car" << std::endl; }
};


int main() {
 Vehicle v;

 Car c;

 v.print();
 c.print();

 Vehicle *v1 = new Vehicle;
 Vehicle *v2;
 // v2 = &v1;
 v2 = &c;

 v2->print();  // We can only access base class properties

 return 0;
}