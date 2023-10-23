#include <iostream>
using namespace std;

int main()
{

 cout << "Insert a character" << endl;
 char ch;
 cin >> ch;
 // ch = 'x';

 if ((ch >= 'A') && (ch <= 'Z'))
 {
  cout << "The character is UPPERCASE" << endl;
 }
 else if ((ch >= 'a') && (ch <= 'z'))
 {
  cout << "The character is LOWERCASE" << endl;
 }
 else
 {
  cout << "The character is invalid" << endl;
 }

 return 0;
}
