#include <set>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

ostream &operator<<(ostream &os, const multiset<string> c) {
  for (const auto &e : c) {
    os << e << " ";
  }
  return os;
}

ostream &operator<<(ostream &os, const vector<string> c) {
  for (const auto &e : c) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[]) {
  multiset<string> c {"7", "8"};
  vector<string> v {"1", "2", "3", "4", "5", "6"};
  // copy(v.begin(), v.end(), inserter(c, c.end()));
  
  // no push_back for multiset
  // copy(v.begin(), v.end(), back_inserter(c));
  // cout << c << endl;

  // copy(c.begin(), c.end(), inserter(v, v.end()));
  // cout << v << endl;

  copy(c.begin(), c.end(), back_inserter(v));
  cout << v << endl;
  return 0;
}

