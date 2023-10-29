#include <iostream>
using namespace std;

int main()
{
 int i = 2;

 while (i <= 20)
 {

  if (i % 8 == 0)
  {
   i++;

   break;
  }

  cout << i << " ";

  i++;
 }

 return 0;
}