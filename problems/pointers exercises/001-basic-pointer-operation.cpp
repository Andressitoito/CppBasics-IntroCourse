/* Practice basic pointer operations. */
#include <iostream>
using namespace std;

int main() {
 // Declare an integer variable 'num' and set its value to 42.
 int num = 42;

 // Declare a pointer 'ptr' and make it point to the address of 'num'.
 int* ptr = &num;

 // Print the value of 'num' and the value pointed to by 'ptr'.
 cout << "num => " << num << endl;
 cout << "ptr => " << *ptr << endl;

 // Your code here

 return 0;
}

int num = 42;
int* ptr = &num;

