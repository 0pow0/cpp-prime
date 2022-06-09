#include <iostream>
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
  foo(cin);
  return 0;
}
