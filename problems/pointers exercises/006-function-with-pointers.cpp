/* Pass pointers to a function and modify values. */
#include <iostream>
using namespace std;

// Declare a function 'modifyValues' that takes two pointers to
// integers and modifies the values pointed to by the pointers.
void modifyValues(int* x, int* y) {
 *x *= 2;
 *y *= 2;
}

int main() {
 // Declare two integer variables 'x' and 'y' with values 15 and 25.
 int x = 15;
 int y = 25;

 // Declare two pointers 'ptrX' and 'ptrY' and make them point to the
 // addresses of 'x' and 'y'.
 int* ptrX = &x;
 int* ptrY = &y;

 // Call the 'modifyValues' function, passing the pointers.
 modifyValues(ptrX, ptrY);

 // Print the updated values of 'x' and 'y'.
 cout << "x value => " << x << endl;
 cout << "y value => " << y << endl;

 return 0;
}
