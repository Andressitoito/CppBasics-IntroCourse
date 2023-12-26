/*  Work with arrays and pointers. */
#include <iostream>
using namespace std;

int main() {
 // Declare an integer array 'numbers' with values {10, 20, 30, 40,
 // 50}.
 int numbers[5] = {10, 20, 30, 40, 50};

 // Declare a pointer 'ptr' and make it point to the address of
 // the first element.
 int* ptr = &numbers[0];

 // Print the values of the array using both array syntax and pointer
 // arithmetic.
 for (int i = 0; i < 5; i++) {
  cout << "array syntax => " << numbers[i] << endl;
  cout << "pointer arithmetic => " << *(ptr + i) << endl << endl;
 }

 return 0;
}
