#include <algorithm>
#include <string>
#include <list>
#include <numeric>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;
using namespace::placeholders;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[]) {
  istream_iterator<int> iter(cin), eof;
  vector<int> vec(iter, eof);
  sort (vec.begin(), vec.end());
  ostream_iterator<int> oIter(cout, " ");
  unique_copy(vec.begin(), vec.end(), oIter);
  cout << endl;
  return 0;
}
