#include <iostream>
using namespace std;

int main()
{
 int i;
 cout << "Insert a number" << endl;
 cin >> i;

 if (i < 5)
 {
  cout << "Hello" << endl;
 }
 else if (i < 10)
 {
  cout << "World" << endl;
 }
 else
 {
  cout << "Hello World" << endl;
 }

 return 0;
}