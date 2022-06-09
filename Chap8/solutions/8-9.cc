#include <iostream>
#include <sstream>
#include <string>

using namespace std;


istream &foo(istream &is) {
  string s;
  while (is >> s) {
    cout << s;
  }
  cout << endl;
  is.clear();
  return is;
}

int main(int argc, char const *argv[])
{
  string s = "hello world hello world hello worl hello worl hello worl hello worl hello worl hello worl hello worlddddddd";
  istringstream is (s);
  foo(is);
  return 0;
}
