#include <iostream>

#include "Student.cpp"
using namespace std;

int main() {
 Student s1;  // Constructor 1 called

 Student s2(100);  // Constructor 2 called

 Student s3(100, 400);  // Constructor 3 called

 Student s4(s3);  // Copy constructor called

 s1 = s2;  // Copy assignment operator called

 // Copy constructor called
 Student s5 = s3;
 // First default constructor
 // Student s5;
 // Then copy constructor called
 // s5 = s3;

 return 0;
}