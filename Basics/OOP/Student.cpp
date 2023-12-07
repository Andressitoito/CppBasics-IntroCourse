#include <iostream>
using namespace std;

class Student {
 int age;
 char name[50];

public:
 // Default constructor
 Student() { cout << "Constructor called" << endl; }

 // Parameterized constructor
 Student(int r) {
  cout << "Constructor 2 called " << endl;
  rollNumber = r;
 }

 int rollNumber;
 void display() { cout << age << " " << rollNumber << endl; }
 void showAge() { cout << "age => " << age << endl; }
 int getAge() { return age; }
 void setAge(int a) { age = a; }
};