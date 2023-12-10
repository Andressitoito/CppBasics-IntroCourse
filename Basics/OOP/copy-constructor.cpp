#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1(10, 100);  // Parameterized constructor, user defined
 s1.display();

 Student s2(s1);  // Copy constructor, inbuilt constructor
 s2.display();

 cout << "address s2 => " << &s2 << endl;

 Student *s3 = new Student(20, 400);
 cout << "address s3 => " << s3 << endl;
 s3->display();

 // Statically copy of a dynamic object
 Student s4(*s3);

 // Dynamically copy of a dynamic object
 Student *s5 = new Student(*s3);

 delete s3, s5;


 return 0;
}