#include <iostream>
using namespace std;

int length(char input[]) {
 int count = 0;

 for (int i = 0; input[i] != '\0'; i++) {
  count++;
 }

 return count;
}

int main() {
 char name[100] = "Andresito";

 int ans = length(name);
 cout << "name length " << ans << endl;

 return 0;
}