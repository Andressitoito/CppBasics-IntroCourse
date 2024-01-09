#include <iostream>
using namespace std;

class Polynomial {
 int *degCoef;
 int capacity;

public:
 ////////////////////////////////////
 // Default Constructor
 ////////////////////////////////////
 Polynomial() {
  capacity = 5;
  degCoef = new int[capacity];

  for (int i = 0; i < capacity; i++) {
   degCoef[i] = i;
  }
 }

 ////////////////////////////////////
 //  Parameterized constructor
 ////////////////////////////////////
 Polynomial(int arr[], int size) {
  capacity = size;
  degCoef = new int[size];

  for (int i = 0; i < size; i++) {
   degCoef[i] = arr[i];
  }
 }

 // Copy constructor



 // get capacity
 int getCapacity() { return this->capacity; }

 // Copy assigment operator


 // Print function
 void print() const {
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

 // Overload plus operator


 // Overload minus operator


 // Overload multiply operator


 // setCoef function

 ~Polynomial() { delete[] degCoef; }
};

int main() {
 int arr[6] = {3, 2, 0, 5, 0, 6};

 Polynomial p1(arr, 6);
 Polynomial p2(p1);
 p1.print();


 p2.print();


 return 0;
}
