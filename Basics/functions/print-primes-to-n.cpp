#include <iostream>
using namespace std;

void printPrimes(int n);

bool isPrime(int n);

int main() {
 int n = 30;

 printPrimes(n);

 return 0;
}

void printPrimes(int n) {
 for (int i = 2; i <= n; i++) {
  if (isPrime(i)) {
   cout << i << endl;
  }
 }
}

bool isPrime(int n) {
 int i = 2;

 while (i < n) {
  if (n % i == 0) {
   return false;
  }
  i++;
 }

 return true;
}
