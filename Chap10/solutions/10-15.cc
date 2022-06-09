#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10;
  auto f = [a](int b) -> int {return a + b;};
  cout << f(2) << endl;
  return 0;
}
