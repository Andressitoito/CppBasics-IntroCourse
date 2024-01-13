#include <iostream>
using namespace std;

int main() {
 // Step 1: Declare 10 integer variables and initialize it with any
 // value.
 int a = 10;
 int b = 20;
 int c = 30;
 int d = 40;
 int e = 50;
 int f = 60;
 int g = 70;
 int h = 80;
 int i = 90;
 int j = 100;

 // Step 2: Declare a reference 'ref_x, ref_y...' and make it refer to
 // the variable 'x,y...' and so on.
 int &ref_a = a;
 int &ref_b = b;
 int &ref_c = c;
 int &ref_d = d;
 int &ref_e = e;
 int &ref_f = f;
 int &ref_g = g;
 int &ref_h = h;
 int &ref_i = i;
 int &ref_j = j;

 // Step 3: Print the value of each variable and the value referred to
 // by each 'ref_x, ref_y...'.
 cout << "value of a => " << a << ", value referred to by ref_a: => "
      << ref_a << endl;
 cout << "value of b => " << b << ", value referred to by ref_b: => "
      << ref_b << endl;
 cout << "value of c => " << c << ", value referred to by ref_c: => "
      << ref_c << endl;
 cout << "value of d => " << d << ", value referred to by ref_d: => "
      << ref_d << endl;
 cout << "value of e => " << e << ", value referred to by ref_e: => "
      << ref_e << endl;
 cout << "value of f => " << f << ", value referred to by ref_f: => "
      << ref_f << endl;
 cout << "value of g => " << g << ", value referred to by ref_g: => "
      << ref_g << endl;
 cout << "value of h => " << h << ", value referred to by ref_h: => "
      << ref_h << endl;
 cout << "value of i => " << i << ", value referred to by ref_i: => "
      << ref_i << endl;
 cout << "value of j => " << j << ", value referred to by ref_j: => "
      << ref_j << endl;

 return 0;
}
