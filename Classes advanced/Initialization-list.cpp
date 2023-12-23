#include <iostream>
using namespace std;

class Student {
public:
 int age;
 int const rollNumber;
 int &ref_age;

 Student(int r, int age) : rollNumber(r), age(this->age), ref_age(this->age) {
  // rollNumber = r;
 }
};


int main() {
 Student s1(200, 20);

 s1.age = 10;

 cout << "Student age  => " << s1.age << endl;
 cout << "Student roll => " << s1.rollNumber << endl;
 cout << "Student ref  => " << s1.ref_age << endl;

 return 0;
}
