#include <iostream>
using namespace std;

class Vehicle {
private:
 int maxSpeed;

protected:
 int numTyres;

public:
 string color;

 Vehicle(int z) {
  std::cout << "Vehicle parameterized constructor" << std::endl;
  maxSpeed = z;
 }

 // Vehicle() {
 // std::cout << "Vehicle default constructor" << std::endl;
 // }

 ~Vehicle() { std::cout << "Vehicle destructor" << std::endl; }
};

class Car : public Vehicle {
public:
 int numGears;

 void print() {
  std::cout << "Num Tyres : " << numTyres << std::endl;
  std::cout << "Color :  " << color << std::endl;
  std::cout << "numGears => " << numGears << std::endl;
  // std::cout << "Max speed : " << maxSpeed << std::endl;
 }

 // Car() : Vehicle(5) {
 //  std::cout << "default constructor parameterized" << std::endl;
 // }

 Car(int x, int y) : Vehicle(x) {
  numGears = y;
  std::cout << "Car parameterized constructor" << std::endl;
 }

 ~Car() { std::cout << "Car destructor" << std::endl; }
};

class HondaCity : public Car {
public:
 HondaCity(int x, int y) : Car(x, y) {
  std::cout << "Honda City Default Constructor" << std::endl;
 }

 ~HondaCity() { std::cout << "Honda City Destructor" << std::endl; }
};

int main() {
 // Vehicle v;
 // v.color = "Blue";
 // v.maxSpeed = 4;
 // v.numTyres = 4;

 // Car c(5);

 HondaCity h(4, 5);
 // c.color = "Black";
 // c.numGears = 5;
 // c.numTyres = 4;


 return 0;
}
