#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

bool isSizeGreaterThan(const string &s, string::size_type sz) {
  return s.size() > sz;
}

int main(int argc, char const *argv[]) {
  vector<string> words {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
  cout << count_if(words.begin(), words.end(), bind(isSizeGreaterThan, _1, 3)) << endl;
  return 0;
}

