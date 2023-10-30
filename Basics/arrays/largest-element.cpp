#include <iostream>
using namespace std;

int main()
{
 int arr[5] = {4, 1, 8, 9, 2};

 int max = arr[0];
 int min = arr[0];

 for (int i = 0; i < 5; i++)
 {
  cout << arr[i] << endl;

  int elem = arr[i];

  if (elem > max)
  {
   max = elem;
  }

  if (elem < min)
  {
   min = elem;
  }
 }

 cout << "Largest element: " << max << endl;
 cout << "Smallest element: " << min << endl;

 return 0;
}