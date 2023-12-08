#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1;
 Student *s2 = new Student;

 s1.setAge(20);
 s2->setAge(34);

 s1.display();
 s2->display();

 Student s3(12, 133);
 s3.display();

 delete s2;

 return 0;
}