/* Understand the similarities and differences between pointers and
 * references.
 */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'm' and initialize it with any
 // value.
 int m = 15;

 // Step 2: Declare a pointer 'ptr_m' and make it point to the address
 // of 'm'.
 int *ptr_m = &m;

 // Step 3: Declare a reference 'ref_m' and make it refer to
 // the variable 'm'.
 int &ref_m = m;

 // Step 4: Print the value of 'm', the value
 // pointed to by 'ptr_m', and the value referred to by 'ref_m'.
 cout << "value of m = " << m << endl;
 cout << "value of ptr_m = " << ptr_m << endl;
 cout << "value of ref_m = " << ref_m << endl;

 return 0;
}