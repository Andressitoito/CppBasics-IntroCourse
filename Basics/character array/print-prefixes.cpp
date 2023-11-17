#include <cstring>
#include <iostream>
using namespace std;

void printPrefixes(char str[]) {
 char cpyStr[50];

 for (int i = 0; str[i] != '\0'; i++) {
  strncpy(cpyStr, str, i + 1);
  cout << cpyStr << endl;
 }
}

void printAllPrefixes(char str[]) {
 for (int end = 0; str[end] != '\0'; end++) {
  for (int j = 0; j <= end; j++) {
   cout << str[j];
  }
  cout << endl;
 }
}

int main() {
 char str[30] = "Andresito";

 printPrefixes(str);

 printAllPrefixes(str);

 return 0;
}