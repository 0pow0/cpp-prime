#include <string>
#include <iostream>
#include <vector>

using namespace std;

void foo(string &s, string &oldVal, string &newVal) {
  string::size_type t = oldVal.size();
  for (auto it = s.begin(); it != s.end(); ++it) {
    if (*it == oldVal[0]) {
      auto it1 = oldVal.begin();
      auto start = it;
      while (it1 != oldVal.end() && *it == *it1) {
        ++it;
        ++it1;
      }
      if (it1 == oldVal.end()) {
        it = s.erase(start, it);
        it = s.insert(it, newVal.begin(), newVal.end());
        it += oldVal.size();
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  string s = "abc tho thru";
  // string old = "tho", newVal = "though";
  string old = "thru", newVal = "through";
  foo(s, old, newVal);
  cout << s << endl;
  return 0;
}
