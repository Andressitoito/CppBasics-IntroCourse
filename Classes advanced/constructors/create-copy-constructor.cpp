#include <cstring>
#include <iostream>
using namespace std;

class Student {
private:
 int age;

public:
 char* name;

 // Why this copy constructor says class "Student" may not have a parameter of type Student

 Student(Student const &s) {
  this->age = s.age;
  // Shallow copy
  // this->name = s.name;
  // Deep copy
  this->name = new char[strlen(s.name + 1)];
 }

 Student(int age, char* name) {
  this->age = age;

  // Shallow copy => copy only the address of the array
  // this->name = name;

  // Deep copy => Copy the entire array, not only the address
  this->name = new char[strlen(name) + 1];
  strcpy(this->name, name);
 }

 void display() {
  cout << "Student => " << name << ", age: " << age << endl;
 }



 // ~Student() { delete[] name; }
};

int main() {
 char name[] = "Jhon";

 Student s1(23, name);
 s1.display();

 // Copy constructor called
 Student s2(s1);
 s2.name[0] = 'x';
 s1.display();
 s2.display();


 // name[3] = 'e';
 // Student s2(30, name);
 // s2.display();
 // s1.display();

 return 0;
}
