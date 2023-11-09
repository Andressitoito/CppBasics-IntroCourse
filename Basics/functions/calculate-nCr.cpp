#include <iostream>
using namespace std;

int factorial(int n) {
 int fact = 1;

 while (n > 1) {
  fact *= n;
  n--;
 }

 return fact;
}

int nCr(int n, int r) {
 int ans = factorial(n) / (factorial(n - r) * factorial(r));

 return ans;
}

int main() {
 int n = 115;
 int r = 3;

 int nCrAns = nCr(n, r);

 cout << "nCr " << nCrAns << endl;

 return 0;
}