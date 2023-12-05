/* Functions in C++ can return pointers, which means they can return
 * the address of a memory location. This can be particularly useful
 * when a function needs to dynamically allocate memory inside and
 * return the address of that memory. */
#include <iostream>
using namespace std;

// Step 1: Declare a function 'createDynamicArray' that takes an
// integer 'size' and returns a pointer to a dynamically allocated
// integer array of that size.
int* createDynamicArray(int size) {
 int* myDynamicArray = new int[size];

 for (int i = 0; i < size; i++) {
  myDynamicArray[i] = i;
 }

 return myDynamicArray;
}

int main() {
 // Step 2: Call the 'createDynamicArray' function with a specific
 // size.
 int size = 5;
 int* returnedArray = createDynamicArray(size);

 // Step 3: Assign the returned pointer to a variable.
 int* myArray = returnedArray;

 // Step 4: Print the values of the dynamically allocated array.
 for (int i = 0; i < size; i++) {
  cout << "Dynamic value = " << myArray[i] << endl;
 }

 // Step 5: Deallocate the dynamically allocated array.
 delete[] returnedArray;

 return 0;
}
