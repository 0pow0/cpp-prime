#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void foo(istream &is, vector<string> &vec) {
  string s;
  char word[100] = {0};
  while (is.getline(word, 100, '\n')) {
    vec.push_back(word);
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
