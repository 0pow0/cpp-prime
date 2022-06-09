#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  ifstream ifs ("/Users/zuorui/Code/cpp_primer/Chap8/solutions/foo.txt");
  string s;
  vector<string> v;
  while (getline(ifs, s)) {
    v.push_back(s);
  }
  for (string e : v) {
    istringstream iss (e);
    string word = "";
    while (iss >> word) {
      cout << word;
    }
    cout << endl;
  }
  return 0;
}
