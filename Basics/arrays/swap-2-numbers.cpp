#include <iostream>
using namespace std;

int main()
{
 int a = 5;
 int b = 7;

 cout << "value a " << a << endl;
 cout << "value b " << b << endl
      << endl;
 cout << "swap! " << endl
      << endl;

 int temp = a;

 a = b;
 b = temp;

 cout << "value a " << a << endl;
 cout << "value b " << b << endl;

 cout << "--------------------------" << endl;

 cout << "swap! using XOR" << endl
      << endl;

 a = a ^ b;
 b = a ^ b;
 a = a ^ b;

 cout << "value a " << a << endl;
 cout << "value b " << b << endl;

 cout << "--------------------------" << endl;

 cout << "swap! using inbuild function swap(a,b)" << endl
      << endl;

 swap(a, b);

 cout << "value a " << a << endl;
 cout << "value b " << b << endl;

 return 0;
}