#include <iostream>
using namespace std;

int main() {
 char name[100];
 cout << "Enter your name: " << endl;
 cin.getline(name, 100);

 cout << "name " << name << endl;

 char last[10];
 cout << "Enter your last: " << endl;
 cin.getline(last, 4, 'd');

 cout << "Last " << last << endl;

 return 0;
}