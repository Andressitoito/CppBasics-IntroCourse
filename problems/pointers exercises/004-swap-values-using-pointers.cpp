/* Swap the values of two variables using pointers. */
#include <iostream>
using namespace std;

int main() {
 // Declare two integer variables 'a' and 'b' with values 5 and 10.
 int a = 5;
 int b = 10;

 // Declare two pointers 'ptrA' and 'ptrB' and make them point to the
 // addresses of 'a' and 'b'.
 int* prtA = &a;
 int* ptrB = &b;

 // Swap the values of 'a' and 'b' using pointers.
 swap(*prtA, *ptrB);

 // Print the values of 'a' and 'b' after the swap.
 cout << "value a => " << a << endl;
 cout << "value b => " << b << endl;

 return 0;
}