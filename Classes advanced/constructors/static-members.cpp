#include <iostream>
using namespace std;

class Student {
private:
 static int totalStudents;


public:
 int rollNumber;
 int age;

 Student() { totalStudents++; }

 int getRollNumber() { return rollNumber; }

 static int getTotalStudents() { return totalStudents; }
};

int Student::totalStudents = 0;

int main() {
 Student s1;

 cout << "Student 1 => " << s1.age << "  " << s1.rollNumber << endl;

 Student s2, s3, s4, s5;

 // Wrong this is private
 // cout << "totalStudents => " << Student::totalStudents << endl;

 cout << "totalStudents => " << Student::getTotalStudents() << endl;

 return 0;
}
