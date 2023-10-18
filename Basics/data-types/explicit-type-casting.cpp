#include <iostream>
using namespace std;

int main()
{
 //////////////////////////////
 // EXPLICIT TYPECASTING
 //////////////////////////////
 /*
 float

 int

 char

 bool
 */

 char ch = 'A';
 // This is explicit type casting
 int val = (int)ch;

 cout << val << endl;

 cout << "***************************************" << endl;

 bool b = true;
 int x = (int)b;
 cout << x << endl;

 cout << "***************************************" << endl;

 int y = 70;
 char abc = (char)y;
 cout << abc << endl;

 return 0;
}