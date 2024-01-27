#include <iostream>
using namespace std;

// 1. Declare a function named `square` that takes a pointer to an
// integer as a parameter and squares the value pointed to by the
// pointer.
void square(int* ptr) { *ptr *= *ptr; }

int main() {
 // 2. Inside the main function:
 // a. Declare an integer variable `num` and set its initial value
 // to 5.
 int num = 5;

 // b. Declare a pointer `ptr` of type int and initialize it to point
 // to the address of `num`.
 int* ptr = &num;

 // c. Call the `square` function, passing the pointer `ptr` as an
 // argument.
 square(ptr);

 // d. Print the squared value of `num`.
 cout << "num => " << num << endl;

 return 0;
}