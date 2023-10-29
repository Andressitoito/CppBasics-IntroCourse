#include <iostream>
using namespace std;

int main()
{
 int n = 5;
 int i = 1;

 while (i <= n)
 {
  int count = 1;
  while (count <= n - i)
  {
   cout << " ";
   count++;
  }

  int j = 1;
  int value = 1;
  while (j <= 2 * i - 1)
  {
   cout << value;
   value++;
   j++;
  }

  cout << endl;

  i++;
 }

 return 0;
}