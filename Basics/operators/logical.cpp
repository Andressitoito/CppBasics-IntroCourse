#include <iostream>
using namespace std;

int main()
{
 int a, b, c;
 cin >> a >> b >> c;
 bool isALargest = (a > b) && (a > c);
 cout << "If 0 false else is 1 true A is largest " << isALargest << endl;

 cout << "If 0 false else is 1 true A is largest than B or C" << endl;
 cout << ((a > b) && (a > c)) << endl;

 cout << "Negation operator " << (!(a >= b)) << endl;

 return 0;
}
