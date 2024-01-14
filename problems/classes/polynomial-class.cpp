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
 // Parameterized Constructor
 ////////////////////////////////////
 Polynomial(int arr[], int size) {
  capacity = size;
  degCoef = new int[size];

  for (int i = 0; i < size; i++) {
   degCoef[i] = arr[i];
  }
 }

 ////////////////////////////////////
 // Deep Copy Constructor
 ////////////////////////////////////
 Polynomial(Polynomial const &p) {
  this->capacity = p.capacity;
  this->degCoef = new int[p.capacity];

  for (int i = 0; i < capacity; i++) {
   degCoef[i] = p.degCoef[i];
  }
 }

 ////////////////////////////////////
 // Copy assigment operator
 ////////////////////////////////////
 void operator=(Polynomial const &p) {
  this->capacity = p.capacity;
  this->degCoef = new int[p.capacity];

  for (int i = 0; i < capacity; i++) {
   degCoef[i] = p.degCoef[i];
  }
 }

 ////////////////////////////////////
 // Get Capacity
 ////////////////////////////////////
 int getCapacity() const { return this->capacity; }

 ////////////////////////////////////
 // Print Function
 ////////////////////////////////////
 void print() const {
  for (int i = 0; i < this->capacity; i++) {
   if (i == 0 && this->degCoef != 0) {
    cout << this->degCoef[i];
   } else {
    if (this->degCoef[i] != 0) {
     if (degCoef[i] > 0) {
      cout << " + " << degCoef[i] << "x^" << i;
     } else {
      cout << " " << degCoef[i] << "x^" << i;
     }
    }
   }
  }
  cout << endl;
 }

 ////////////////////////////////////
 // Overload Plus Operator
 ////////////////////////////////////
 Polynomial &operator+=(Polynomial const &p) {
  int size = max(this->capacity, p.capacity);

  if (size > this->capacity) {
   int *newDefCoef = new int[size];

   for (int i = 0; i < this->capacity; i++) {
    newDefCoef[i] = this->degCoef[i];
   }

   delete[] this->degCoef;

   this->degCoef = newDefCoef;
   this->capacity = size;
  }

  for (int i = 0; i < size; i++) {
   degCoef[i] = this->degCoef[i] + p.degCoef[i];
  }

  return *this;
 }

 ////////////////////////////////////
 // Overload Minus Operator
 ////////////////////////////////////
 Polynomial &operator-=(Polynomial &p) {
  int size = std::max(this->capacity, p.capacity);

  if (size > this->capacity) {
   int *newDegCoef = new int[size];

   for (int i = 0; i < size; i++) {
    newDegCoef[i] = this->degCoef[i];
   }

   delete[] this->degCoef;

   this->degCoef = newDegCoef;
   this->capacity = size;
  }

  for (int i = 0; i < size; i++) {
   degCoef[i] = this->degCoef[i] - p.degCoef[i];
  }

  return *this;
 }

 ////////////////////////////////////
 // Overload Multiply Operator
 ////////////////////////////////////
 Polynomial &operator*=(Polynomial const &p) {
  int size = std::max(this->capacity, p.capacity);

  if (size < this->capacity) {
   int *newDegCoef = new int[size];

   for (int i = 0; i < size; i++) {
    newDegCoef[i] = this->degCoef[i];
   }

   delete[] this->degCoef;

   this->degCoef = newDegCoef;
   this->capacity = size;
  }

  int *arrDegCoef = new int[size];

  for (int i = 0; i < size; i++) {
   arrDegCoef[i] = 0;
   std::cout << "arDefCoef => " << arrDegCoef[i] << std::endl;
  }


  for (int i = 0; i < size; i++) {
   for (int j = i + 1; j < size; j++) {
    int prev = this->degCoef[i] + p.degCoef[j];

    arrDegCoef[i] = this->degCoef[j] * p.degCoef[j];

    
   }
  }
 }




 // setCoef function




 ~Polynomial() { delete[] degCoef; }
};

int main() {
 int arr[6] = {3, 2, 0, 5, 0, 6};

 Polynomial p1(arr, 6);
 Polynomial p2(p1);
 // p1.print();
 // p2.print();

 Polynomial p3;

 int arr2[5] = {1, 5, 13, -43, 5};
 Polynomial p5(arr2, 5);

 p3.print();

 p3 += p1;

 cout << "sum 1 => " << endl;
 p3.print();

 p3 -= p1;

 cout << "sum2 => " << endl;
 p3.print();

 p1 += p5;
 cout << "pass3 => " << endl;
 p1.print();

 return 0;
}
