#include <iostream>
using namespace std;

int main()
{
 int n = 100;

 int rev = 0;

 // while (n != 0)
 // {
 //  int last = n % 10;

 //  rev = rev * 10 + last;

 //  n = n / 10;
 // }

 while (n != 0)
 {
  cout << n % 10 << endl;

  n /= 10; 
 }

 cout << "Response: " << rev << endl;

 return 0;
}