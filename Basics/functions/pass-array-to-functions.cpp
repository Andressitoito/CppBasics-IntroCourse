#include <iostream>
using namespace std;

void print(int a[], int n) {
 for (int i = 0; i < n; i++) {
  cout << a[i] << endl;
 }

 a[0] = 10;
}

int sum(int a[], int n) {
 int ans = 0;

 for (int i = 0; i < n; i++) {
  cout << "elem " << a[i] << endl;
  ans += a[i];
 }

 return ans;
}

int main() {
 const int n = 5;
 int a[n] = {1, 2, 3, 4, 5};

 print(a, n);
 int ans = sum(a, n);

 cout << "sum " << ans << endl;

 return 0;
}