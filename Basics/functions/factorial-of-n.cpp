#include <iostream>
using namespace std;

int factorial(int n);

int main() {
 int n = 4;

 int fact = factorial(n);

 cout << "Result: " << fact << endl;

 return 0;
}

int factorial(int n) {
 int fact = 1;

 while (n > 1) {
  fact *= n;

  n--;
 }

 return fact;
}