/* Passing pointers to functions allows the function to access and
 * modify the data pointed to by the pointer. When a pointer is passed
 * to a function, changes made to the data through the pointer inside
 * the function affect the original data. */
#include <iostream>
using namespace std;

// Step 1: Declare a function 'modifyArray' that takes a pointer to an
// integer array and modifies the values in the array (e.g.,
// increments each element by 5).
void modifyArray(int *ptr, int size) {
 for (int i = 0; i < size; i++) {
  *(ptr + i) += 5;
 }
}

int main() {
 // Step 2: Declare an integer array 'arr' of size 3 and initialize it
 // with some values.
 int arr[3] = {10, 20, 30};

 // Step 3: Call the 'modifyArray' function, passing the pointer to
 // the 'arr' array.
 modifyArray(arr, 3);

 // Step 4: Print the modified values of the array.
 for (int i = 0; i < 3; i++) {
  cout << arr[i] << endl;
 }

 return 0;
}
