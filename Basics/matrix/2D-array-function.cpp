#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n) {
 for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
   cout << a[i][j] << "    ";
  }
  cout << endl << endl;
 }
}

int main() {
 int a[5][5] = {{1, 2}, {3, 4}};

 printArray(a, 5, 5); 

 /* FOMULA THAT STORES DATA IN 1D ARRAY 
 a[i][j] => i * C + j
 */

 return 0;
}

