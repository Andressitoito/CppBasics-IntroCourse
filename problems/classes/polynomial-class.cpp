#include <iostream>
using namespace std;



class Polynomial {
 int *degCoef;
 int capacity;

public:
 // Default constructor
 Polynomial() {
  capacity = 5;
  degCoef = new int[capacity];

  for (int i = 0; i < capacity; i++) {
   degCoef[i] = i;
  }
 }
 //  Parameterized constructor
 Polynomial(int arr[]) {}
 // Copy constructor


 // Copy assigment operator


 // Print function
 void print() {
  for (int i = 0; i < this->capacity; i++) {
   if (i == 0 && this->degCoef != 0) {
    cout << this->degCoef[i];
   } else {
    if (this->degCoef[i] != 0) {
     if (degCoef[i] > 0) {
      cout << " + " << degCoef[i] << "x^" << i;
     } else {
      cout << " - " << degCoef[i] << "x^" << i;
     }
    }
   }
  }
  cout << endl;
 }

 //  num + x's +

 // Overload plus operator


 // Overload minus operator


 // Overload multiply operator


 // setCoef function

 ~Polynomial() { delete[] degCoef; }
};

int main() {
 Polynomial p1;

 p1.print();


 return 0;
}
