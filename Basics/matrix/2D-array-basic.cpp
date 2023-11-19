#include <iostream>
using namespace std;

int main() {
 int a[100][100];

 int m = 5;
 int n = 4;

 int count = 1;
 for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
   a[i][j] = count;
   count++;
  }
 }

 for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
   cout << a[i][j] << "   ";
  }
  cout << endl;
 }

 cout << endl;
 cout << endl;
 cout << endl;

 for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
   cout << a[j][i] << "   ";
  }
  cout << endl;
 }

 return 0;
}