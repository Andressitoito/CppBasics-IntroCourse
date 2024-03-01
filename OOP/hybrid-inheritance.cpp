#include <iostream>
using namespace std;

class Vehicle {
private:
 int maxSpeed;

protected:
 int numTyres;

public:
 string color;

 Vehicle() {
  std::cout << "Vehicle default constructor" << std::endl;
 }
 Vehicle(int z) {
  std::cout << "Vehicle parameterized constructor" << std::endl;
  maxSpeed = z;
 }
 void print() { std::cout << "Vehicle" << std::endl; }
 ~Vehicle() { std::cout << "Vehicle destructor" << std::endl; }
};

class Car : public Vehicle {
public:
 int numGears;

 Car() { std::cout << "Car default constructor" << std::endl; }
 ~Car() { std::cout << "Car destructor" << std::endl; }
};

class Truck : public Vehicle {
public:
 Truck() { std::cout << "Truck constructor" << std::endl; }
};

class Bus : public Car, public Truck {
public:
 Bus() { std::cout << "Bus constructor" << std::endl; }
};

int main() {
 Bus b;




 return 0;
}