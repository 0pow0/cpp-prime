#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;
using namespace::placeholders;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[]) {
  vector<string> v1 {"123", "123", "1", "1", "2", "2", "3", "3"};
  vector<string> v2 (v1.size());
  unique_copy(v1.begin(), v1.end(), v2.begin());
  cout << v2 << endl;
  return 0;
}
