/*
Exam: Pointers and References in C++

1- What is the purpose of pointers in C++?

A pointer stores the memory address of a variable and is primarily used for working with dynamic memory allocation.


2- Explain the difference between pointers and references in C++.

The main difference is that pointers, as variables, can be reassigned and hold null values, while references must always be initialized with a value and cannot be null. References are primarily used to pass values into functions to directly work with the original object or variable itself.


3 - How do you declare a pointer variable in C++?

To declare a null pointer to an integer:
int* p = nullptr;
To declare a pointer to an existing integer variable::
int myVar = 10;
int* p = &myvar;


4 - How do you assign a value to a pointer variable in C++?

To assign a value to the variable pointed to by a pointer, you dereference the pointer using the * operator. In this example, the value of myNum is reassigned from 10 to 20 through dereferencing:

int myNum = 10;
int* p = &myNum;  // p points to the memory address of myNum
*p = 20;          // Dereference p and assign 20 to the value at that address (myNum)


5 - How do you access the value pointed by a pointer in C++?

To access the value pointed to by a pointer in C++, you dereference the pointer using the * operator.

int myNum = 42;
int* p = &myNum;  // p points to the memory address of myNum

std::cout << *p;  // Output: 42 (prints the value of myNum, accessed through dereferencing)

*/

