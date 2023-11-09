#include <iostream>
using namespace std;

// Void does not return anything
void printHello()
{
 cout << "Hello" << endl;
}

// This function returns an int
int addTwo(int a, int b)
{
 return a + b;
}

// Forward declaration
int square(int a);

// Main function
int main()
{
 printHello();

 int c = 34;
 int d = 75;

 int answer = addTwo(c, d);
 cout << "answer add two: " << answer << endl;

 cout << "square result: "<<square(34);

 return 0;
}

// Declaration of square function
int square(int a)
{
 int ans = a * a;
 return ans;
}