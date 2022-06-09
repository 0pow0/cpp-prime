#include <initializer_list>
#include <iostream>

using namespace std;

int foo (initializer_list<int> l) {
  int res = 0;
  for (initializer_list<int>::iterator it = l.begin(); it != l.end(); ++it) {
    res += *it;
  }
  return res;
}

int main(int argc, char const *argv[])
{
  cout << foo({1, 2, 3}) << endl;
  return 0;
}
