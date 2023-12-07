#include <iostream>
using namespace std;

int main() {
 // new int[20] => Would return the addres of the first element

 // 2D MATRIX, square
 int** p = new int*[10];

 for (int i = 0; i < 10; i++) {
  p[i] = new int[20];

  for (int j = 0; j < 20; j++) {
   p[i][j] = i + j;
   cout << "2D square p[i][j] => " << p[i][j] << endl;
  }
 }

 for (int i = 0; i < 10; i++) {
  delete[] p[i];
 }

 delete[] p;

 // 2D MATRIX, stair
 int** ptr = new int*[5];

 for (int i = 0; i < 5; i++) {
  ptr[i] = new int[i + 1];

  for (int j = 0; j < i + 1; j++) {
   ptr[i][j] = i + j;
   cout << "ptr[i][j] => " << ptr[i][j] << endl;
  }
 }

 for (int i = 0; i < 5; i++) {
  delete[] ptr[i];
 }

 delete[] ptr;

 return 0;
}