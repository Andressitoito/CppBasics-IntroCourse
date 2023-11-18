#include <iostream>
using namespace std;

int main() {
 int x = 5;
 int *ptr = &x;  // Pointer pointing to the address of x
 int &ref = x;   // Reference to x

 cout << "Value of x: " << x << endl;
 cout << "Value through pointer: " << *ptr
      << endl;  // Dereferencing the pointer
 cout << "Value address of the pointer: " << ptr << endl;
 cout << "Value through reference: " << ref << endl;

 *ptr = 10;  // Modifying the value using the pointer
 cout << "Updated value through reference: " << ref << endl;

 return 0;
}
