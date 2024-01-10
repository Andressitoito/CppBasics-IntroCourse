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

 void print() const {
  cout << "Fraction => " << this->numerator << "/" << denominator
       << endl;
 }

 void Add(Fraction const &f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;
  // Store result in f1
  this->numerator = num;
  this->denominator = lcm;

  this->simplify();
 }

 Fraction add(Fraction const &f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;

  Fraction fnew(num, lcm);  // Parameterized construction called

  fnew.simplify();

  return fnew;
 }

 Fraction operator+(Fraction const &f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;

  Fraction fnew(num, lcm);  // Parameterized construction called

  fnew.simplify();

  return fnew;
 }


 void multiply(Fraction const &f2) {
  this->numerator = numerator * f2.numerator;
  this->denominator = denominator * f2.denominator;

  this->simplify();
 }

 Fraction operator*(Fraction const &f2) {
  int num = numerator * f2.numerator;
  int den = denominator * f2.denominator;

  Fraction fnew(num, den);

  fnew.simplify();

  return fnew;
 }

 bool operator==(Fraction const &f2) const {
  return (numerator == f2.numerator && denominator == f2.denominator);
 }

 // pre increment
 Fraction &operator++() {
  numerator = numerator + denominator;
  simplify();

  return *this;
 }

 // post increment
 Fraction operator++(int) {
  Fraction fnew(numerator, denominator);
  this->numerator = numerator + denominator;
  this->simplify();
  fnew.simplify();

  return fnew;
 }

 Fraction &operator+=(Fraction const &f2) {
  int lcm = this->denominator * f2.denominator;
  int x = lcm / denominator;
  int y = lcm / f2.denominator;
  int num = x * numerator + y * f2.numerator;

  numerator = num;
  denominator = lcm;
  simplify();

  return *this;
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
 Fraction f1(10, 3);
 Fraction f2(5, 2);

 Fraction f3 = f1 + f2;
 f3.print();
 f1 += f2;
 f1.print();
 f2.print();



 (f1 += f2) += f2;

 f1.print();
 f2.print();

 return 0;
}