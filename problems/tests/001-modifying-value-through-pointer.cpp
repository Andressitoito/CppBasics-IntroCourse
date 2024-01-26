#include <iostream>
using namespace std;

// Test 1: 001-modifying-value-through-pointer.cpp
int main() {
 // 1. Declare an integer variable `num` and set its initial value
 // to 10.
 int num = 10;

 // 2. Declare a pointer `ptr` of type int and initialize it to point
 // to the address of `num`.
 int *ptr = &num;

 // 3. Modify the value of `num` through the pointer `ptr` to double
 // its original value.
 *ptr *= 2;

 // 4. Print the final values of `num` and the value pointed to by
 // `ptr.
 cout << "num => " << num << endl;
 cout << "ptr => " << ptr << endl;

 return 0;
}