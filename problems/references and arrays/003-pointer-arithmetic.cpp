#include <iostream>
using namespace std;

void printValues(int* ptr, int size);

int main() {
 // Step 1: Declare 10 arrays of integers and initialize them with
 // any values.
 int arr0[3] = {55, 6, 2};
 int arr1[5] = {1, 2, 3, 4, 5};
 int arr2[2] = {6, 1};
 int arr3[6] = {7, 1, 2, 3, 6, 3};
 int arr4[1] = {2};
 int arr5[4] = {1, 5, 7, 1};
 int arr6[3] = {4, 6, 1};
 int arr7[2] = {6, 8};
 int arr8[4] = {4, 5, 6, 1};
 int arr9[3] = {4, 1, 5};

 // Step 2: Declare a pointer that points to the first element of
 // each array.
 int* ptr0 = &arr0[0];
 int* ptr1 = &arr1[0];
 int* ptr2 = &arr2[0];
 int* ptr3 = &arr3[0];
 int* ptr4 = &arr4[0];
 int* ptr5 = &arr5[0];
 int* ptr6 = &arr6[0];
 int* ptr7 = &arr7[0];
 int* ptr8 = &arr8[0];
 int* ptr9 = &arr9[0];

 // Step 3: Use pointer arithmetic to print the values of the
 // array elements.
 printValues(ptr0, 3);
 printValues(ptr1, 5);
 printValues(ptr2, 2);
 printValues(ptr3, 6);
 printValues(ptr4, 1);
 printValues(ptr5, 4);
 printValues(ptr6, 3);
 printValues(ptr7, 2);
 printValues(ptr8, 4);
 printValues(ptr9, 3);

 return 0;
}

void printValues(int* ptr, int size) {
 for (int i = 0; i < size; i++) {
  cout << "Elem [i] => " << *(ptr + i) << endl;
 }
}