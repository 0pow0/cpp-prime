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
  vector<string> vec;
  ifstream ifs("/Users/zuorui/Code/cpp_primer/Chap10/solutions/data.txt");
  istream_iterator<string> sIter(ifs), eof;
  while (sIter != eof) {
    vec.push_back(*sIter++);
  }
  cout << vec << endl;
  return 0;
}
