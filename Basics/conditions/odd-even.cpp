#include <iostream>
using namespace std;

int main()
{
 cout << "Insert a number" << endl;
 int n;
 // cin >> n;
 n = 14;

 if (n % 2 == 0)
 {
  cout << "The number is even" << endl;
 }
 else
 {
  cout << "The number is odd" << endl;
 }

 int a = 1;
 int x = a++;
 int y = ++a;

 cout << x << " " << y << " " << a << endl;

 int b = 0;
 if (b++)
 {
  cout << "Hello" << endl;
  cout << b;
 }
 else
 {
  cout << "Bye ";
  cout << b;
 }

 return 0;
}