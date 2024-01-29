#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare 10 integers variables and initialize it with any
 // value.
 int var0 = 74;
 int var1 = 21;
 int var2 = 85;
 int var3 = 43;
 int var4 = 12;
 int var5 = 32;
 int var6 = 91;
 int var7 = 24;
 int var8 = 26;
 int var9 = 31;

 // Step 2: Declare a pointer that points to the address of each
 // variable.
 int* ptr0 = &var0;
 int* ptr1 = &var1;
 int* ptr2 = &var2;
 int* ptr3 = &var3;
 int* ptr4 = &var4;
 int* ptr5 = &var5;
 int* ptr6 = &var6;
 int* ptr7 = &var7;
 int* ptr8 = &var8;
 int* ptr9 = &var9;

 // Step 3: Declare a reference that refers to each variable.
 int& ref0 = var0;
 int& ref1 = var1;
 int& ref2 = var2;
 int& ref3 = var3;
 int& ref4 = var4;
 int& ref5 = var5;
 int& ref6 = var6;
 int& ref7 = var7;
 int& ref8 = var8;
 int& ref9 = var9;

 // Step 4: Print the values of the variables using both the pointer
 // and the reference.
 cout << "var0 value by pointer   => " << *ptr0 << endl;
 cout << "var0 value by reference => " << ref0 << endl;
 cout << "var1 value by pointer   => " << *ptr1 << endl;
 cout << "var1 value by reference => " << ref1 << endl;
 cout << "var2 value by pointer   => " << *ptr2 << endl;
 cout << "var2 value by reference => " << ref2 << endl;
 cout << "var3 value by pointer   => " << *ptr3 << endl;
 cout << "var3 value by reference => " << ref3 << endl;
 cout << "var4 value by pointer   => " << *ptr4 << endl;
 cout << "var4 value by reference => " << ref4 << endl;
 cout << "var5 value by pointer   => " << *ptr5 << endl;
 cout << "var5 value by reference => " << ref5 << endl;
 cout << "var6 value by pointer   => " << *ptr6 << endl;
 cout << "var6 value by reference => " << ref6 << endl;
 cout << "var7 value by pointer   => " << *ptr7 << endl;
 cout << "var7 value by reference => " << ref7 << endl;
 cout << "var8 value by pointer   => " << *ptr8 << endl;
 cout << "var8 value by reference => " << ref8 << endl;
 cout << "var9 value by pointer   => " << *ptr9 << endl;
 cout << "var9 value by reference => " << ref9 << endl;

 return 0;
}
