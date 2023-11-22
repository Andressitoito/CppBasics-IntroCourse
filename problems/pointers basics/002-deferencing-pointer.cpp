/* Understand how to use the dereference operator to access the value stored in
 * the memory location pointed by a pointer. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'x' and initialize it with any value.
 int x = 13;

 // Step 2: Declare a pointer 'ptr' and make it point to the address of 'x'.
 int *ptr = &x;

 // Step 3: Use the dereference operator to print the value stored in the
 // address pointed by 'ptr'.
 int dref = *ptr;

 cout << "value of x through dereference -> " << dref << endl;

 return 0;
}