#include <iostream>
using namespace std;

int main()
{
 int n = 10;
 int i = 2;
 int sum = 0;

 while (i <= n)
 {
  sum += i;
  i += 2;
 }

 cout << "Response: " << sum << endl;

 return 0;
}