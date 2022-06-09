#include <iostream>

using namespace std;

void f() {cout << "void f()" << endl;}
void f(int) {cout << "void f(int)" << endl;}
void f(int, int) {cout << "void f(int, int)" << endl;}
void f(double, double=3.14) {cout << "void f(double, double=3.14)" << endl;}

int main(int argc, char const *argv[])
{
  // viable: 3, 4
  // ambiguous
  // f(2.56, 42);
  // viable: 2, 4
  // optimal: 2
  f(42);
  // viable: 3, 4
  // optimal: 3
  f(42, 0);
  // viable: 3, 42
  // optimal: 4
  f(2.56, 3.14);
  return 0;
}
