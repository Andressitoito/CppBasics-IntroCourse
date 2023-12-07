#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 // Creating objects statically
 Student s1;
 Student s2, s3, s4;

 // Creating objects dynamically
 Student *s6 = new Student;

 s1.setAge(24);
 s1.rollNumber = 100;
 s1.display();
 s1.showAge();

 cout << "s1 age => " << s1.getAge() << endl;

 cout << "student rollNumber => " << s1.rollNumber << endl;

 (*s6).setAge(34);
 s6->rollNumber = 1000;
 s6->display();
 s6->showAge();
 
 cout << "student rollNumber => " << s6->rollNumber << endl;

 // Deleting the dynamically created object to free the memory
 delete s6;

 return 0;
}
