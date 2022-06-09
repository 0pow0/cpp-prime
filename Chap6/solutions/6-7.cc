#include <iostream>

using namespace std;

int foo();

int main(int argc, char const *argv[])
{
  for (int i = 0; i < 10; i++)
    cout << foo() << endl;
  return 0;
}

int foo() {
  static int res = 0;
  return res++;
}
