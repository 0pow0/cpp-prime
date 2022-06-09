#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  set<string> s;
  s.insert("123");
  s.insert("123");
  cout << s.size() << endl;
  return 0;
}
