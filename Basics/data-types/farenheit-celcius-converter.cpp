#include <iostream>
using namespace std;

int main()
{

 int fah;
 cin >> fah;

 // INCORRECT
 // int cel = (5 / 9) * (fah - 32);
 
 // CORRECT
  // int cel = ((5) * (fah - 32)) / 9;

 // CORRECT WITH TYPE CASTING
 int cel = (int)((5.0 / 9) * (fah - 32));

 cout << cel << endl;

 return 0;  
}