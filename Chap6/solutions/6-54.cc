#include <vector>
#include <iostream>

using namespace std;

int foo(int, int);
int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}
int mul(int a, int b) {return a*b;}
int div_(int a, int b) {return a/b;}

int main(int argc, char const *argv[])
{
  vector<int (*)(int, int)> vec {add, sub, mul, div_};
  for (int (*e)(int, int) : vec) {
    cout << e(1, 2) << endl;
  }
  return 0;
}
