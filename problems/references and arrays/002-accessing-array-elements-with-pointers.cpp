#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare 10 integer variables and initialize it with any
 // value.
 int a = 10;
 int b = 20;
 int c = 30;
 int d = 40;
 int e = 50;
 int f = 60;
 int g = 70;
 int h = 80;
 int i = 90;
 int j = 100;

 // Step 2: Declare a pointer for each of the variables from the
 // previous exercise.
 int* ptr_a;
 int* ptr_b;
 int* ptr_c;
 int* ptr_d;
 int* ptr_e;
 int* ptr_f;
 int* ptr_g;
 int* ptr_h;
 int* ptr_i;
 int* ptr_j;

 // Step 3: Assign the address of each variable to its respective
 // pointer.
 ptr_a = &a;
 ptr_b = &b;
 ptr_c = &c;
 ptr_d = &d;
 ptr_e = &e;
 ptr_f = &f;
 ptr_g = &g;
 ptr_h = &h;
 ptr_i = &i;
 ptr_j = &j;

 // Step 4: Print the value of each variable using both the variable
 // and the pointer.
 cout << "Value from variable => " << a << endl;
 cout << "Value from pointer  => " << *ptr_a << endl;
 cout << "Value from variable => " << b << endl;
 cout << "Value from pointer  => " << *ptr_b << endl;
 cout << "Value from variable => " << c << endl;
 cout << "Value from pointer  => " << *ptr_c << endl;
 cout << "Value from variable => " << d << endl;
 cout << "Value from pointer  => " << *ptr_d << endl;
 cout << "Value from variable => " << e << endl;
 cout << "Value from pointer  => " << *ptr_e << endl;
 cout << "Value from variable => " << f << endl;
 cout << "Value from pointer  => " << *ptr_f << endl;
 cout << "Value from variable => " << g << endl;
 cout << "Value from pointer  => " << *ptr_g << endl;
 cout << "Value from variable => " << h << endl;
 cout << "Value from pointer  => " << *ptr_h << endl;
 cout << "Value from variable => " << i << endl;
 cout << "Value from pointer  => " << *ptr_i << endl;
 cout << "Value from variable => " << j << endl;
 cout << "Value from pointer  => " << *ptr_j << endl;

 return 0;
}