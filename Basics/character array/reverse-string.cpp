#include <iostream>
using namespace std;

int length(char arr[]) {
 int count = 0;

 for (int i = 0; arr[i] != '\0'; i++) {
  count++;
 }

 return count;
}

void reverse(char str[]) {
 int start = 0;
 int end = length(str) - 1;

 while (start < end) {
  swap(str[start], str[end]);

  start++;
  end--;
 }
}

int main() {
 char arr[50] = "Hello World";

 cout << "Array Normal" << endl << arr << endl << endl;

 reverse(arr);

 cout << "Array Swapped " << endl << arr << endl;

 return 0;
}