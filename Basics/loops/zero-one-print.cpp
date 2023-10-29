#include <iostream>
using namespace std;

int main()
{
 int n = 5;

 int i = 1;

 while (i <= n)
 {

  int value;

  if (i % 2 == 0)
  {
   value = 0;
  }
  else
  {
   value = 1;
  }

  int count = 1;
  while (count <= i)
  {

   cout << value;

   if (value == 1)
   {
    value = 0;
   }
   else if (value == 0)
   {
    value = 1;
   }

   value = value - 1;

   count++;
  }

  cout << endl;

  i++;
 }

 return 0;
}
