#include <list>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string s;
  list<string> l;
  while (cin >> s) {
    l.push_back(s);
  }
  for (auto it = l.cbegin(); it != l.cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
