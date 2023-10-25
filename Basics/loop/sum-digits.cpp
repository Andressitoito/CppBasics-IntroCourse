#include <iostream>
using namespace std;

int main()
{
 int n = 346;

 int sum = 0;

 while (n != 0)
 {
  int last_digit = n % 10;

  sum += last_digit;

  n = n / 10;
 }

 cout << "Response: " << sum << endl;

 return 0;
}