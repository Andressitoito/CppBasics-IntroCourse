#include <cstring>
#include <iostream>
using namespace std;

class Student {
 int age;
 char* name;

public:
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

};

int main() {
 char name[] = "Jhon";

 Student s1(23, name);

 s1.display();

 name[3] = 'e';

 Student s2(30, name);

 s2.display();
 s1.display();


 return 0;
}
