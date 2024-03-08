#include <iostream>
using namespace std;

class Vehicle {
private:
 int maxSpeed;

protected:
 int numTyres;

public:
 string color;

 // Vehicle() {
 //  std::cout << "Vehicle default constructor" << std::endl;
 // }

 Vehicle(int z) {
  std::cout << "Vehicle parameterized constructor " << z << std::endl;
  maxSpeed = z;
 }
 void print() { std::cout << "Vehicle" << std::endl; }
 ~Vehicle() { std::cout << "Vehicle destructor" << std::endl; }
};

class Car : virtual public Vehicle {
public:
 int numGears;

 Car() : Vehicle(3) {
  std::cout << "Car default constructor" << std::endl;
 }
 ~Car() { std::cout << "Car destructor" << std::endl; }

 void print() {
  std::cout << "Num tyres => " << numTyres << std::endl;
  std::cout << "Color => " << color << std::endl;
  std::cout << "Num gears => " << numGears << std::endl;
 }
};

class Truck : virtual public Vehicle {
public:
 Truck() : Vehicle(4) {
  std::cout << "Truck constructor" << std::endl;
 }
};

class Bus : public Car, public Truck {
public:
 Bus() : Vehicle(5) { std::cout << "Bus constructor" << std::endl; }
};

int main() {
 Bus b;

 b.Car::print();
 b.Truck::print();

 return 0;
}