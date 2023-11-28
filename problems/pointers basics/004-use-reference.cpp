/* Learn how to declare and use references. */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'z' and initialize it with any
 // value.
 int z = 13;

 // Step 2: Declare a reference 'ref_z' and make it refer to the
 // variable 'z'.
 int &ref_z = z;

 // Step 3: Print the value of 'z' and the value referred to by
 // 'ref_z'.
 cout << "value of z = " << z << endl;
 cout << "value of ref_z = " << ref_z << endl;

 return 0;
}