/* Learn how to modify the value of a variable using a pointer. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'y' and initialize it with any
 // value.
 int y = 13;

 // Step 2: Declare a pointer 'ptr_y' and make it point to the address
 // of 'y'.
 int *ptr = &y;

 // Step 3: Use the dereference operator to modify the value of 'y'
 // through the pointer.
 *ptr = 7;

 // Step 4: Print the updated value of 'y'.
 cout << "Updated value of y = " << y << endl;

 return 0;
}