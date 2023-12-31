#include <iostream>
using namespace std;

/*
As soon as we create a class we get functions

1- Default constructor
2- Copy contructor
3- Copy assignment constructor
4- Destructor
*/

class Student {
 int age;
 char name[50];

public:
 // Default constructor
 Student() { cout << "Constructor called" << endl; }

 // Parameterized constructor
 Student(int rollNumber) {
  cout << "Constructor 2 called " << endl;
  this->rollNumber = rollNumber;
 }

 Student(int a, int r) {
  cout << "Constructor 3 called " << endl;
  cout << "this => " << this << endl;
  age = a;
  rollNumber = r;
 }

 int rollNumber;
 void display() { cout << age << " " << rollNumber << endl; }
 void showAge() { cout << "age => " << age << endl; }
 int getAge() { return age; }
 void setAge(int a) { age = a; }


 ~Student() { cout << "destructor called => " << endl; }
};
