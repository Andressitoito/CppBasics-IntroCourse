#include <iostream>
using namespace std;

int main()
{
 cout << " BITWISE AND" << endl;
 cout << "(5 & 3) => " << (5 & 3) << endl;
 cout << "(4 & 3) => " << (4 & 3) << endl;

 cout << " BITWISE OR" << endl;
 cout << "(5 | 3) => " << (5 | 3) << endl;
 cout << "(4 | 3) => " << (4 | 3) << endl;

 cout << " BITWISE NEGATION" << endl;
 cout << "~5 => " << (~5) << endl;
 cout << "~1 => " << (~1) << endl;

 cout << " BITWISE XOR" << endl;
 cout << "(5 ^ 3) => " << (5 ^ 3) << endl;
 cout << "(4 ^ 3) => " << (4 ^ 3) << endl;
 cout << "(a ^ a) => 0 => " << (4 ^ 4) << endl;
 cout << "(a ^ 0) => a => " << (4 ^ 0) << endl;
 cout << "(2 ^ 3 ^ 5 ^ 3 ^ 2 ^ 5) => " << (2 ^ 3 ^ 5 ^ 3 ^ 2 ^ 5) << endl;

 cout << " BITWISE LEFTSHIFT" << endl;
 cout << "(1 << 3) => " << (1 << 3) << endl;
 cout << "(3 << 3) => " << (3 << 3) << endl;

 cout << " BITWISE RIGHTSHIFT" << endl;
 cout << "(1 >> 3) => " << (1 >> 3) << endl;
 cout << "(13 >> 1) => " << (13 >> 3) << endl;

 return 0;
}