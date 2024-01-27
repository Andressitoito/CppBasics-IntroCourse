#include <iostream>
using namespace std;

// Test 2: 002-pointer-array.cpp
int main() {
 // 1. Declare an integer array named `numbers` with five elements: 1,
 // 2, 3, 4, 5.
 int size = 5;
 int numbers[5] = {1, 2, 3, 4, 5};

 // 2. Declare a pointer `ptr` of type int and initialize it to point
 // to the first element of the array.
 int* ptr = &numbers[0];

 // 3. Using pointer arithmetic, print the values of the array
 // elements using the pointer.
 for (int i = 0; i < size; i++) {
  cout << "value => " << *(ptr + i) << endl;
 }

 // 4. Modify the third element of the array through the pointer to
 // have a value of 10.
 *(ptr + 3) = 10;

 // 5. Print the modified array elements using both array notation
 // and pointer arithmetic.
 for (int i = 0; i < size; i++) {
  cout << "array notation     => " << numbers[i] << endl;
  cout << "pointer arithmetic => " << *(ptr + i) << endl;
 }

 return 0;
}