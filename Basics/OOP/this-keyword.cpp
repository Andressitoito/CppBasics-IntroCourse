#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1(23, 455);
 cout << "Address of s1 => " << &s1 << endl;

 Student s2(23,444);
 cout << "Address of s2 => " << &s2 << endl;

 return 0;
}