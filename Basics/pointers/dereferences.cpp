#include <iostream>
using namespace std;

int main() {
 int i = 10;
 int* p = &i;

 cout << "i " << i << endl;
 cout << "*p " << *p << endl;

 cout << "address i => " << &i << endl;
 cout << "address p => " << p << endl;
 cout << "address &p => " << &p << endl;

 int x = 20;

 int* ptr;

 cout << "addres => " << ptr << endl;  // 0
 cout << "address => " << &ptr << endl;


 int j;
 cout << "j => " << j << endl;

 int* pointer = nullptr;
 cout << "pointer => " << pointer << endl;

 return 0;
}