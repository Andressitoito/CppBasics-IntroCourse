#include <iostream>
using namespace std;

int main()
{
 //////////////////////////////
 // IMPLICIT TYPECASTING
 //////////////////////////////
 /*
 char  + int   = int
 float + int   = int
 char  + char  = int
 int   / int   = int
 int   / float = float
 */

 cout << endl;
 char c = 'a';
 // "a" in this case has a value of 97 so adding 3 gives 100
 cout << c + 3 << endl;

 cout << "***************************************" << endl;

 char ch = 'A';
 // 'A' has a value of 65 plus 1 = 66
 cout << 'A' + 1 << endl; // 66

 // Here 'A' has a value of 66 plus 1 = 66
 // but here by implecit typecasting 66 would be converted to a char
 ch = ch + 1;
 cout << ch << endl; // B

 cout << "***************************************" << endl;

 return 0;
}