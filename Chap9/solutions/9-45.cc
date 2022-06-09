#include <string>
#include <iostream>
#include <vector>

using namespace std;

string &foo(string &s, string &prefix, string &suffix) {
  s.insert(s.begin(), prefix.begin(), prefix.end());
  s.append(suffix);
  return s;
}

int main(int argc, char const *argv[])
{
  string s = "Rui Zuo";
  string prefix = "Mr.", suffix = "Jr.";
  foo(s, prefix, suffix);
  cout << s << endl;
  return 0;
}
