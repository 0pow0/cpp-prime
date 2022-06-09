#include <string>
#include <iostream>
#include <vector>

using namespace std;

istream &operator>> (istream &is, vector<char> &v) {
  char c = '\0';
  is >> c;
  v.push_back(c);
  return is;
}

int main(int argc, char const *argv[])
{
  vector<char> v;
  while (cin >> v) {}
  v.push_back('\0');
  string s (&v[0]);
  cout << s << endl;
  return 0;
}
