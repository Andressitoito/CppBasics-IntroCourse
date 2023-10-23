#include <iostream>
using namespace std;

int main()
{
 cout << "Enter a number" << endl;
 int num;
 cin >> num;

 num % 2 == 0 ? cout << "The number is even" : cout << "The number is odd";

 return 0;
}