#include <memory>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  char *p = nullptr;
  while (cin >> s) {
    p = new char[s.size()];
  }
  strcat(p, s.c_str());
  cout << p << endl5;
  return 0;
}

