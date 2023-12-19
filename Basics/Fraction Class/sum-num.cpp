#include <iostream>
using namespace std;

class Num {
private:
 int value;

public:
 Num(int value) { this->value = value; }

 void add(Num n2) { this->value = value + n2.value; }

 void print() { cout << "Value => " << this->value << endl; }
};

int main() {
 Num n1(23);
 Num n2(10);

 n1.print();
 n1.add(n2);
 n1.print();

 return 0;
}
