/* Practice dynamic memory allocation. */
#include <iostream>
using namespace std;

int main() {
 // Declare a pointer 'dynamicPtr' for an integer.
 int* dinamycPtr;

 // Use dynamic memory allocation to allocate memory for an integer.
 dinamycPtr = new int;

 // Assign a value to the dynamically allocated memory.
 *dinamycPtr = 5;

 // Print the value.
 cout << "dinamic value => " << *dinamycPtr << endl;

 // Deallocate the dynamically allocated memory.
 delete dinamycPtr;

 return 0;
}
