#include <iostream>
using namespace std;

class Bus {
public:
 void print();
};

void test();

class Truck {
private:
 int x;

protected:
 int y;

public:
 int z;
 void display() {}

 // Friend class, one way friendship
 friend class Bus;
 // Friend function
 friend void test();
};
void test() {
 // access the private truck
 Truck t;
 t.x = 10;
 t.y = 20;

 std::cout << "t.x => " << t.x << std::endl;
 std::cout << "t.y => " << t.y << std::endl;
}

void Bus::print() {
 Truck t;
 t.x = 10;
 t.y = 20;

 std::cout << "t.x => " << t.x << std::endl;
 std::cout << "t.y => " << t.y << std::endl;
}

int main() {
 Bus b;

 // They are no part of the part class
 // Friends do not have access to "this" key word
 // Friends cannot modify
 b.print();
 test();

 return 0;
}
