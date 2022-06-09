#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main(int argc, char const *argv[])
{
  vector<string> words {"e", "b", "zbc", "abc"};
  stable_sort(words.begin(), words.end(), isShorter);
  cout << words << endl;
}
