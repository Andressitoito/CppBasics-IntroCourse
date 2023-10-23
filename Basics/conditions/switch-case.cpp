#include <iostream>
using namespace std;

int main()
{
 char ch;
 ch = 'M';

 switch (ch)
 {
 case 'm':
 case 'M':
  cout << "Monday" << endl;
  break;
 case 'T':
  cout << "Tuesday" << endl;
  break;
 case 'S':
  cout << "Sunday" << endl;
  break;
 default:
  cout << "Invalid character" << endl;
 }

 return 0;
}