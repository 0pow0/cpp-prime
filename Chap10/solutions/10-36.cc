#include <list>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  list<int> l {1, 2, 3, 4, 0, 1, 0};
  auto lastZero = find(l.crbegin(), l.crend(), 4);
  cout << *lastZero << " ";
  for (list<int>::const_iterator it = lastZero.base(); it != l.cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}

