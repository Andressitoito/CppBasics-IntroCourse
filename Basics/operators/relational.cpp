#include <iostream>
using namespace std;

int main()
{
 // RELATIONAL OPERATORS RETURN TRUE OR FALSE

 int i, j;
 cin >> i >> j;

 bool isEq = (i == j);
 bool nEq = (i != j);
 bool isGr = (i > j);
 bool isGrEq = (i >= j);
 bool isLess = (i < j);
 bool isLessEq = (i <= j);

 cout << "Is equal " << isEq << endl;
 cout << "Is not equal " << nEq << endl;
 cout << "Is grater " << isGr << endl;
 cout << "Is greater equal " << isGrEq << endl;
 cout << "Is less " << isLess << endl;
 cout << "Is less equal " << isLessEq << endl;

 return 0;
}