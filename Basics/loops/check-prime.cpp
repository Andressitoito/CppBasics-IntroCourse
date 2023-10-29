#include <iostream>
using namespace std;

int main()
{
 int n = 10;
 bool ans = true;

 for (int i = 2; i < n - 1; i++)
 {
  if (n % i == 0)
  {
   ans = false;
   break;
  }
 }

 if (ans)
 {
  cout << "Is prime " << n << endl;
 }
 else
 {
  cout << "Is NOT prime " << n << endl;
 }

 return 0;
}