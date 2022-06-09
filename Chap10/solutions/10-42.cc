#include <list>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  list<int> l {1, 1, 2, 2, 3, 3};
  l.unique();
  for (const auto &e : l) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
