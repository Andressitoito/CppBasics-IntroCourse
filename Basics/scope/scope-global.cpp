#include <iostream>
using namespace std;

int x = 12;

int main()
{
 int x = 10;

 cout << "Local => cout << x => " << x << endl;
 cout << "Global => cout << ::x => " << ::x << endl;

 // scope resolution operator
 ::x = 20;

 cout << "Global => cout << ::x => " << ::x << endl;

 return 0;
} 