#include <iostream>
using namespace std;

class DynamicArray {
 int *data;
 int nextIndex;
 int capacity;

public:
 DynamicArray() {
  data = new int[5];
  nextIndex = 0;
  capacity = 5;
 }

 DynamicArray(DynamicArray const &d) {
  this->nextIndex = d.nextIndex;
  this->capacity = d.capacity;
  // this->data = d.data; SHALLOW COPY
  this->data = new int[d.capacity];
  for (int i = 0; i < nextIndex; i++) {
   this->data[i] = d.data[i];
  }
 }

 DynamicArray(int c) {
  data = new int[c];
  nextIndex = 0;
  capacity = c;
 }

 void operator=(DynamicArray const &d) {
  this->nextIndex = d.nextIndex;
  this->capacity = d.capacity;
  this->data = new int[d.capacity];
  for (int i = 0; i < nextIndex; i++) {
   this->data[i] = d.data[i];
  }
 }

 void add(int element) {
  if (nextIndex == capacity) {
   int *newData = new int[2 * capacity];

   for (int i = 0; i < capacity; i++) {
    newData[i] = data[i];
   }

   delete[] data;

   data = newData;
   capacity *= 2;
  }

  data[nextIndex] = element;
  nextIndex++;
 }

 void add(int element, int i) {
  if (i < nextIndex) {
   data[i] = element;
  } else if (i == nextIndex) {
   add(element);
  } else {
   return;
  }
 }

 int getElement(int i) const {
  if (i >= 0 && i < nextIndex) {
   return data[i];
  } else {
   return -1;
  }
 }

 void print() const {
  for (int i = 0; i < nextIndex; i++) {
   cout << "data[i] => " << data[i] << endl;
  }
 }

 int getCapacity() const {
  cout << "capacity => " << capacity << endl;
  return capacity;
 }
};

int main() {
 DynamicArray d1;

 d1.add(10);
 d1.add(20);
 d1.add(30);
 d1.add(40);
 d1.add(50);
 d1.add(60);

 d1.print();
 d1.getCapacity();

 cout << "d1 element [0] => " << d1.getElement(0) << endl;
 cout << "d1 element [5] => " << d1.getElement(5) << endl;
 cout << "d1 element [50] => " << d1.getElement(50) << endl;

 DynamicArray d2(d1);
 DynamicArray d3;
 d3 = d1;
 d1.add(100, 0);
 d1.print();
 d2.print();
 d3.print();

 DynamicArray d4(100);
 d4.getCapacity();

 

 return 0;
}
