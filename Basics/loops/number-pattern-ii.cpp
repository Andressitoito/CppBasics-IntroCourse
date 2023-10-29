#include <iostream>
using namespace std;

int main()
{
 int n = 5;

 int i = 1;
 while (i <= n)
 {
  // PRINT SPACES
  int space = 1;
  while (space <= n - i)
  {
   cout << " ";
   space++;
  }
  // PRINT NUMBERS ASCENDING
  int value = i;
  int count = 1;
  while (count <= i)
  {
   cout << value;
   count++;
   value++;
  }
  // PRINT NUMBERS DESCENDING
  int numbers = 2 * i - 2;
  count = 1;
  while (count <= i - 1)
  {
   cout << numbers;
   numbers--;
   count++;
  }
  // NEW LINE
  cout << endl;

  i++;
 }

 return 0;
}