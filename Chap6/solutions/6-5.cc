#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  cout << abs(-2) << endl;
  return 0;
}

int abs(int a) {
  return a < 0 ? -a : a;
}
