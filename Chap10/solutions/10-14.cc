#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  auto f = [](int a, int b) -> int {return a + b;};
  cout << f(1, 2) << endl;
  return 0;
}
