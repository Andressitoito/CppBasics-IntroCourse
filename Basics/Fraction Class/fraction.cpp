#include <algorithm>
#include <iostream>
using namespace std;

class Fraction {
private:
 int numerator;
 int denominator;

public:
 Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  this->denominator = denominator;
 }
 void print() {
  cout << "Fraction => " << this->numerator << "/" << denominator
       << endl;
 }
 void add(Fraction f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;
  // Store result in f1
  this->numerator = num;
  this->denominator = lcm;

  this->simplify();
 }
 void simplify() {
  int gcd = 1;
  int j = min(this->numerator, this->denominator);

  for (int i = 1; i <= j; i++) {
   if (numerator % i == 0 && denominator % i == 0) {
    gcd = i;
   }
  }

  // inbuilt function for gcd = __gdc(a, b)
  // int c = __gdc(a,b)
  int gcd2 = __gcd(this->numerator, this->denominator);

  this->numerator = this->numerator / gcd;
  this->denominator = this->denominator / gcd;
 }
};

int main() {
 Fraction f1(10, 2);
 Fraction f2(15, 4);

 f1.add(f2);
 f1.print();
 f2.print();

 return 0;
}
