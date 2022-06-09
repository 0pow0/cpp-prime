#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
#include <iostream>

using namespace std;

ostream &operator<< (ostream &os, const list<int> l) {
  for (const auto &e : l) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[]) {
  vector<int> vec {1, 2, 3, 4, 5, 6, 7};
  list<int> list;
  copy(vec.crend() - 7, vec.crend() - 2, back_inserter(list)) ;
  cout << list << endl;
  return 0;
}
