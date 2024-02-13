#include <iostream>
using namespace std;

class Vehicle {
private:
 int maxSpeed;

protected:
 int numTyres;

public:
 string color;
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
};


int main() {
 Vehicle v;
 v.color = "Blue";
 // v.maxSpeed = 4;
 // v.numTyres = 4;

 Car c;

c.color = "Black";
c.numGears = 5;
// c.numTyres = 4;


 return 0;
}
