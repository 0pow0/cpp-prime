#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<char> v {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
  string s (&(v[0]));
  cout << s << endl;
  return 0;
}
