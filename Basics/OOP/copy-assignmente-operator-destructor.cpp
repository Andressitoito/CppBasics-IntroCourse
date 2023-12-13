#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1(10, 100);
 Student s2(20, 200);
 s1.display();
 s2.display();

 Student *s3 = new Student(30, 300);

 s2 = s1;
 *s3 = s1;
 s2 = *s3;

 s1.display();
 s2.display();

 cout << "address => " << &s2 << endl;

 delete s3;

 return 0;
}