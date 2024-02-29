#include <iostream>
using namespace std;

class Teacher {
public:
 string name;
 int age;

 void print() { std::cout << "Teacher" << std::endl; }
};

class Student {
public:
 string name;

 void print() { std::cout << "Student" << std::endl; }
};

class TeachingAssitant : public Teacher, public Student {
public:
 void print() { std::cout << "Teaching asistent" << std::endl; }
};

int main() {
 TeachingAssitant a;
 a.print();
 a.Student::print();

 a.Teacher::name = 'abc';

 return 0;
}