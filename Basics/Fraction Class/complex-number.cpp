#include <iostream>
using namespace std;

class ComplexNumbers {
private:
 int real;
 int imaginary;

public:
 ComplexNumbers(int real, int imaginary) {
  this->real = real;
  this->imaginary = imaginary;
 }

 void print() {
  cout << "Complex number => "
       << "( " << this->real << ", " << this->imaginary << " i )"
       << endl;
 }

 void plus(ComplexNumbers const &c2) {
  this->real = real + c2.real;
  this->imaginary = imaginary + c2.imaginary;
 }

 void multiply(ComplexNumbers const &c2) {
  this->real = (real * c2.real) - (imaginary * c2.imaginary);
  this->imaginary = (real * c2.imaginary) + (imaginary * c2.real);
 }
};

int main() {
 int real1 = 5;
 int real2 = 4;
 int imaginary1 = 8;
 int imaginary2 = 6;

 ComplexNumbers c1(real1, imaginary1);
 ComplexNumbers c2(real2, imaginary2);

 c1.print();
 c1.plus(c2);
 c1.print();
 c1.multiply(c2);
 c1.print();

 return 0;
}
