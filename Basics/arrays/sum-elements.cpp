#include <iostream>
using namespace std;

int main()
{
 int a[4] = {4, 3, 2, 5};
 int sum = 0;

 for (int i = 0; i < 4; i++)
 {
  sum += a[i];
  cout << sum << endl;
 }

 cout << "Final sum " << sum << endl;

 return 0;
}