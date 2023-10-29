#include <iostream>
using namespace std;

int main()
{

 int a = 5;
 int b = 6;

 int sum = 0;

 for (int i = 0; i < b; i++)
 {
  sum += a;

  cout << "sum = "<<sum << endl;
 }

 cout << "Multiply a * b = " << sum << endl;

 return 0;
}