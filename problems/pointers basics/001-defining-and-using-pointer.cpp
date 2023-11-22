/* Create a variable, define a pointer to it, and print the values. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'num' and initialize it with any value.
 int num = 7;

 // Step 2: Declare a pointer 'ptr' and make it point to the address of 'num'.
 int *ptr = &num;

 // Step 3: Print the value of 'num' and the value stored in the address pointed
 // by 'ptr'.
 cout << "num: " << num << endl;
 cout << "address pointed: " << ptr << endl;

 return 0;
}