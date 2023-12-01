/* Dynamic memory allocation is also useful for creating dynamic
 * arrays. You can allocate memory for an array of a specified size
 * using the new operator and deallocate it using delete[]. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare a pointer 'dynamic_array' for an integer array.
 int *dynamic_array;

 // Step 2: Use dynamic memory allocation to allocate memory for an
 // integer array of size 5.
 dynamic_array = new int[5];

 // Step 3: Assign values to the elements of the dynamically allocated
 // array.
 for (int i = 0; i < 5; i++) {
  dynamic_array[i] = i;
 }

 // Step 4: Print the values of the array.
 for (int i = 0; i < 5; i++) {
  cout << "dynamic value = " << dynamic_array[i] << endl;
 }

 // Step 5: Deallocate the dynamically allocated array.
 delete[] dynamic_array;

 return 0;
}
