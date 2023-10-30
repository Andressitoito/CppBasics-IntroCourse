#include <iostream>
using namespace std;

int main()
{
 int length = 5;
 int arr[5] = {1, 2, 3, 4, 5};

 int start = 0;
 int end = length - 1;

 cout << "----- FOR LOOP METHOD -----" << endl;

 for (int i = 0; i < length; i++)
 {
  if (start > end)
  {
   break;
  }
  else
  {
   swap(arr[start], arr[end]);
  }
 }

 for (int i = 0; i < length; i++)
 {
  cout << arr[i] << endl;
 }

 cout << "----- WHILE METHOD -----" << endl;

 while (start < end)
 {
  swap(arr[start], arr[end]);

  start++;
  end--;
 }

 for (int i = 0; i < length; i++)
 {
  cout << arr[i] << endl;
 }

 return 0;
}