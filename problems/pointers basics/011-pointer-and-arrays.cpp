/* In C++, an array name can be used as a pointer to the first element
 * of the array. This is possible because the array name represents
 * the memory address of the first element. Additionally, pointer
 * arithmetic can be applied to navigate through the array. */
#include <iostream>
using namespace std;

// Step 1: Declare a function 'printArray' that takes a pointer to an
// integer array and the size of the array and prints the values.
void printArray(int* arr, int size) {
 for (int i = 0; i < size; i++) {
  cout << "array syntax [i] = " << arr[i] << endl;
  cout << "pointer arithmetic *(ptr + i) = " << *(arr + i) << endl;
  cout << endl;
 }
}

int main() {
 // Step 2: Declare an integer array 'numbers' of size 5 and
 // initialize it with some values.
 int size = 5;
 int numbers[5] = {10, 20, 30, 40, 50};

 // Step 3: Declare a pointer 'ptr' and make it point to the address
 // of the first element of the array.
 int* ptr = numbers;

 // Step 4: Call the 'printArray' function, passing the pointer and
 // the size of the array.
 printArray(ptr, size);

 return 0;
}



