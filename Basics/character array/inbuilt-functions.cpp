#include <cstring>
#include <iostream>
using namespace std;

bool compareString(char str1[], char str2[]) {
 if (strlen(str1) != strlen(str2)) {
  cout << "NOT EQUAL" << endl;
  return false;
 }

 for (int i = 0; str1[i] != '\0'; i++) {
  if (str1[i] - str2[i] != 0) {
   cout << "NOT EQUAL" << endl;
   return false;
  }
 }
 cout << "EQUAL" << endl;
 return true;
}

void copyString(char str1[], char str2[]) {
 for (int i = 0; i <= strlen(str2); i++) {
  if (i == strlen(str2)) {
   str1[i] = '\0';
  }
  str1[i] = str2[i];
 }
}

void concatenate(char str1[], char str2[]) {
 int start = strlen(str1);

 for (int i = 0; str2[i] != '\0'; i++) {
  str1[start + i] = str2[i];
 }
}


int main() {
 cout << "STRING LENGTH" << endl;

 char str1[100] = "Hello World";
 int len = strlen(str1);

 cout << "string 1 length: " << len << endl;

 cout << endl;
 cout << "COMPARE 2 STRINGS" << endl;

 char str2[100] = "Hello Andy";

 if (strcmp(str1, str2) == 0) {
  cout << "Are equal" << endl;
 } else {
  cout << "Are NOT equal" << endl;
 }

 compareString(str1, str2);

 cout << endl;
 cout << "COPY STRING" << endl;

 cout << "Before Copy " << endl << str1 << " " << str2 << endl;
 strcpy(str1, str2);
 cout << "After Copy " << endl << str1 << " " << str2 << endl;
 char str3[30] = "Andresito";
 copyString(str1, str3);
 cout << "After Copy " << endl << str1 << " " << str3 << endl;

 cout << endl;
 cout << "COPY FIRST N CHARACTERS OF STRING" << endl;

 char str4[30];
 strncpy(str4, str3, 6);
 cout << "After Copy n characters" << endl
      << str4 << " " << str3 << endl;

 cout << endl;
 cout << "STRING CONCACATENATION" << endl;
 strcat(str1, str4);
 cout << "After concatenation" << endl << str1 << " " << str4 << endl;
 concatenate(str1, str4);
 cout << "After concatenation" << endl << str1 << " " << str4 << endl;

 return 0;
}