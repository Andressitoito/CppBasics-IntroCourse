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

6 - Can a reference be NULL in C++? Why or why not?

A reference cannot be null in C++ because it must always be initialized with an existing variable's address.


7 - Can a reference be reseated to point to a different object in C++?
Why or why not?

A reference cannot be reassigned to point to a different object in C++ because it's permanently bound to the variable it was initialized with.


8 - What are the advantages of using pointers in C++?

Enhanced memory efficiency:

Pointers allow direct access to memory addresses, enabling you to work with large data structures without creating multiple copies of variables.
This conserves memory and can improve performance.

Dynamic memory allocation:

Pointers are essential for creating and managing objects at runtime using new and delete.
This empowers you to allocate memory as needed, rather than being limited to fixed-size objects at compile time.

Flexible data manipulation:

Pointers can directly modify the values stored at memory addresses, enabling efficient data manipulation within arrays, structures, and other data structures.

Passing by reference:

Passing variables by reference to functions using pointers allows functions to directly modify the original variables, avoiding the overhead of copying data.

Array representation:

Arrays are inherently linked to pointers, as the array name itself acts as a pointer to the first element.
Understanding pointers is crucial for effective array handling.

Implementation of data structures:

Pointers play a fundamental role in constructing complex data structures like linked lists, trees, and graphs, which are essential for various algorithms and applications.


*/

