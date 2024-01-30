#include <iostream>
using namespace std;

int main() {
 // 1- Declare a pointer 'ptr' to an integer and assign it the address
 // of 'num'.
 int num = 42;
 int* ptr1 = &num;
 cout << "ptr1 => " << ptr1 << endl;

 // 2- Declare a pointer 'ptr' to an integer and assign it the address
 // of 'num'. Dereference 'ptr' and assign the value to 'result'.
 int result;
 int* ptr2 = &num;
 result = *ptr2;
 cout << "result => " << result << endl;

 // 3- Declare an array 'arr' of integers and a pointer 'ptr' to
 // an integer. Make 'ptr' point to the first element of 'arr'.
 int arr[3] = {10, 20, 30};
 int* ptr3 = &arr[0];
 cout << "ptr3 => " << ptr3 << endl;

 // 4- Declare a reference 'ref' to an integer and make it refer
 // to 'num'.
 int& ref1 = num;
 cout << "ref1 => " << ref1 << endl;

 // 5- Declare a reference 'ref' to an integer and make it refer
 // to 'num'. Change the value of 'num' through 'ref'.
 int& ref2 = num;
 ref2 = 24;
 cout << "ref2 => " << ref2 << endl;

 // 6- Declare a pointer 'ptr' to an integer and a reference 'ref'
 // to a pointer. Make 'ref' refer to 'ptr'.
 int* ptr4 = &num;
 int*& ref3 = ptr4;
 cout << "ref3 => " << ref3 << endl;

 // 7- Declare a double pointer 'ptr' to an integer and assign it
 // the address of 'num'.
 int* ptr5 = &num;
 int** ptr6 = &ptr5;
 cout << "*ptr5 => " << *ptr5 << endl;
 cout << "*ptr6 => " << *ptr6 << endl;

 // 8- Declare a double pointer 'ptr' to an integer and assign it
 // the address of 'num'. Use 'ptr' to change the value of 'num'.
 int* ptr7 = &num;
 int** ptr8 = &ptr7;
 **ptr8 = 242;
 cout << "ptr7 => " << ptr7 << endl;
 cout << "ptr8 => " << ptr8 << endl;
 cout << "num => " << num << endl;

 // 9- Declare an array 'arr' of integers and a double pointer
 // 'ptr' to an integer. Make 'ptr' point to the first element of
 // 'arr'.
 int arr2[3] = {10, 20, 30};
 int* ptr9 = &arr2[0];
 int** ptr10 = &ptr9;
 cout << "ptr9 => " << ptr9 << endl;
 cout << "ptr10 => " << ptr10 << endl;

 return 0;
}
