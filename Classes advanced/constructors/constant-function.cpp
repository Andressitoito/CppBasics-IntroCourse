#include <algorithm>
#include <iostream>

using namespace std;

class Fraction {
private:
 int numerator;
 int denominator;

public:
 Fraction() {}

 Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  this->denominator = denominator;
 }

 void print() const {
  cout << "Fraction => " << this->numerator << "/" << denominator
       << endl;
 }

 int getNumerator() const { return this->numerator; }

 int getDenominator() const { return this->denominator; }

 void setNumerator(int numerator) { this->numerator = numerator; }

 void setDenominator(int denominator) {
  this->denominator = denominator;
 }

 void add(Fraction const &f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;
  this->numerator = num;
  this->denominator = lcm;

  this->simplify();
 }

 void multiply(Fraction const &f2) {
  this->numerator = numerator * f2.numerator;
  this->denominator = denominator * f2.denominator;

  this->simplify();
 }

 void simplify() {
  int gcd = __gcd(this->numerator, this->denominator);

  this->numerator = this->numerator / gcd;
  this->denominator = this->denominator / gcd;
 }
};

int main() {
 Fraction f1(10, 5);
 Fraction f2(15, 4);
 Fraction const f3;

 cout << "F3 Numerator, Denominator => " << f3.getNumerator() << " , "
      << f3.getDenominator() << endl;

 return 0;
}