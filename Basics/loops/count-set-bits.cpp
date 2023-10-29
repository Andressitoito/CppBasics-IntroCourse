#include <iostream>
using namespace std;

int main()
{
 int num = 5;
 int count = 0;

 while (num > 0)
 {

  int bit = (num & 1);

  count += bit;

  num = num >> 1;
 }

 cout << "Number of 1's: " << count << endl;

 return 0;
}