#include <iostream>
using namespace std;

bool isPrime(int a);

int main() {
 int n = 16;

 while (n > 1) {
  if (isPrime(n)) {
   cout << n << endl;
  }

  n--;
 }
 
 return 0;
}

bool isPrime(int n) {
 int i = 2;
 while (i <= n - 1) {
  if (n % i == 0) {
   return false;
   break;
  }
  i++;
 }

 return true;
}
