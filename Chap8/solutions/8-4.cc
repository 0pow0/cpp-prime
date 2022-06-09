#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void foo(istream &is, vector<string> &vec) {
  string s;
  while (is >> s) {
    vec.push_back(s);
  }
}

int main(int argc, char const *argv[])
{
  vector<string> vec;
  ifstream fis("/Users/zuorui/Code/cpp_primer/Chap8/solutions/foo.txt");
  if (fis) cout << "open success" << endl;
  else cout << "open failed" << endl;
  foo(fis, vec);
  for (string &e : vec) {
    cout << e << endl;
  }
  return 0;
}
