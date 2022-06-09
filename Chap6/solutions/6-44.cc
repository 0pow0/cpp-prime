#include <string>
#include <iostream>

using namespace std;

inline bool
isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size(); 
}

int main(int argc, char const *argv[])
{
  string s1 = "abc";
  string s2 = "123";
  cout << isShorter(s1, s2) << endl;
  return 0;
}
