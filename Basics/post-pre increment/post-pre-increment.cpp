#include <iostream>
using namespace std;

int main()
{

 int a = 1;
 cout << "DEFINE a" << endl;
 cout << a << endl;
 cout << "POST INCREMENT" << endl;
 a++;
 cout << a << endl;
 cout << "PRE INCREMENT" << endl;
 ++a;
 cout << a << endl;

 int b = 1;
 cout << "DEFINE b" << endl;
 cout << b << endl;
 cout << "POST DECREMENT" << endl;
 b--;
 cout << b << endl;
 --b;
 cout << b << endl
      << endl;

 cout << "POST INCREMENT" << endl;
 int c, x;
 c = 1;
 x = c++;
 cout << "POST INCREMENT " << c << endl;
 cout << "POST INCREMENT " << x << endl
      << endl;

 cout << "PRE DECREMENT" << endl;
 int d, z;
 d = 3;
 z = --d;
 cout << "PRE DECREMENT " << d << endl;
 cout << "PRE DECREMENT " << z << endl;

 return 0;
}
