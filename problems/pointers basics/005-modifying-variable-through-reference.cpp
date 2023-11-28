/* Understand how to modify the value of a variable using a reference.
 */
#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare an integer variable 'a' and initialize it with any
 // value.
 int a = 12;

 // Step 2: Declare a reference 'ref_a' and make it refer to the
 // variable 'a'.
 int &ref_a = a;

 // Step 3: Use the reference to modify the value of 'a'.
 ref_a = 24;

 // Step 4: Print the updated value of 'a'.
 cout << "new value of a = " << a << endl;

 return 0;
}
