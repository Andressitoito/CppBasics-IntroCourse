#include <iostream>
#include<cmath>
using namespace std;

int main()
{
 int a = 5;
 int b = 6;

 int ans = 1;

 for (int i = 0; i < b; i++)
 {
  ans *= a;

  cout << "ans = " << ans << endl;
 }

 cout << "Power of a ^ b = " << ans << endl;
 cout << "Power function = " << pow(a, b) << endl;

 return 0;
}