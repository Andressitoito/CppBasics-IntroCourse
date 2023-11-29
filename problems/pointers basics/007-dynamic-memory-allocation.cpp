/* In C++, dynamic memory allocation allows you to manage memory at
 * runtime. It involves using pointers and two operators: new for
 * allocation and delete for deallocation. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare a pointer 'dynamic_ptr' for an integer.
 int *dynamic_ptr;

 // Step 2: Use dynamic memory allocation to allocate memory for an
 // integer.
 dynamic_ptr = new int;

 // Step 3: Assign a value to the dynamically allocated
 // memory.
 *dynamic_ptr = 42;

 // Step 4: Print the value.
 cout << "dynamic_value = " << *dynamic_ptr << endl;

 // Step 5: Deallocate the dynamically allocated memory.
 delete dynamic_ptr;

 return 0;
}