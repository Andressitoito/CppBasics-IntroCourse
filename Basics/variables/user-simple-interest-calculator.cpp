#include <iostream>
using namespace std;

int main()
{
 int p;
 cout << "Insert first number: ";
 cin >> p;
 int r;
 cout << "Insert second number: ";
 cin >> r;
 int t;
 cout << "Insert third number: ";
 cin >> t;

 int SI = (p * r * t) / 100;

 cout << "The Simple Interest is: " << SI;

 return 0;
}