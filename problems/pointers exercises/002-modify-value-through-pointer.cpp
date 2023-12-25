/* Modify the value of a variable through a pointer. */
#include <iostream>
using namespace std;

int main() {
 // Declare an integer variable 'x' and set its value to 7.
 int x = 7;

 // Declare a pointer 'ptr' and make it point to the address of 'x'.
 int* ptr = &x;

 // Modify the value of 'x' through the pointer.
 *ptr = 5;

 // Print the updated value of 'x'.
 cout << "new value => " << x << endl;

 return 0;
}
