#include <iostream>
using namespace std;

int main()
{
 int n = 500;

 for (int i = 1; i <= n; i++)
 {
  int count = i;

  while (count > 0)
  {
   cout << "*";
   count--;
  }
  cout << endl;
 }

 return 0;
}