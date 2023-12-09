#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1;
 s1.display();

 Student s2;
 s2.display();

 Student *s3 = new Student;
 (*s3).display();

 cout << "Parameterized constructor demo " << endl;

 Student s4(7777);
 s4.display();

 Student *s5 = new Student(20);

 (*s5).display();

 delete s3, s5;

 return 0;
}