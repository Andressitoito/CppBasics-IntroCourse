#include <iostream>
using namespace std;

void mySwap(int a, int b) {
 int temp = a;

 a = b;
 b = temp;

 cout << "a b " << a << " " << b << endl;
}

int main() {
 int a = 5;
 int b = 7;

 cout << "Before swapping" << endl;
 cout << a << " " << b << endl;
 mySwap(a, b);
 cout << "After swapping" << endl;
 cout << a << " " << b << endl;

 return 0;
}