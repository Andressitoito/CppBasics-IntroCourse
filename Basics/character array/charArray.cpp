#include <iostream>
using namespace std;

int main() {
 char name[100];

 cout << "Enter your name: " << endl;
 cin >> name;
 cout << "Your name is: " << name << endl;

 name[3] = 'X';
 cout << "Your name is: " << name << endl;

 return 0;
}