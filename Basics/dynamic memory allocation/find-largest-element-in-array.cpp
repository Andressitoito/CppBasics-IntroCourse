#include <iostream>
using namespace std;

int main() {
 int n;

 cin >> n;

 int* a = new int[n];

 for (int i = 0; i < n; i++) {
  cin >> a[i];
 }

 int largest = -1;

 for (int i = 0; i < n; i++) {
  if (a[i] > largest) {
   largest = a[i];
  }
 }

 cout << "largest => " << largest << endl;

 int* p = new int;
 delete p;

 p = new int;
 delete p;

 p = new int[50];
 delete[] p;

 return 0;
}