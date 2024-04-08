#include <iostream>
using namespace std;

template <typename T, typename V>

class Pair {
 T x;
 V y;

public:
 void setX(T x) { this->x = x; }
 T getX() { return x; }
 void setY(V y) { this->y = y; }
 V getY() { return y; }
};
 
int main() {
 Pair<int, double> p1;
 // implicit type casting is taking place here
 p1.setX(1.34); 
 p1.setY(2.34); 
 std::cout << "p1. getX => " << p1.getX() << std::endl;

 Pair<double, double> p2;
 p2.setX(1.2);
 p2.setY(2.3);
 std::cout << "p2. getX => " << p2.getX() << std::endl;

 Pair<char, int> p3;
 p3.setX('a');
 p3.setY(1);
 std::cout << "p3. getX => " << p3.getX() << "   " << p3.getY()
           << std::endl;

 return 0;
}