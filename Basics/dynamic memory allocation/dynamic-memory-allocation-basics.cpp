#include <iostream>
using namespace std;

int main() {
 int *p = new int;
 *p = 10;

 cout << "address p  => " << p << endl;
 cout << "value of p => " << *p << endl;

 double *d = new double;
 *d = 20;

 cout << "addres d => " << &d << endl;
 cout << "value of p => " << *p << endl;

 int n;
 cin >> n;
 int *n = new int[n];

 return 0;
}