#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  string table = "acemnorstuvwxz";
  ifstream ifs ("/Users/zuorui/Code/cpp_primer/Chap9/solutions/sentences.txt");
  string s;
  while (ifs >> s) {
    bool isSatisfied = true;
    for (const char &e : s) {
      if (table.find_first_of(e) == string::npos) {
        isSatisfied = false;
        break;
      }
    }
    if (isSatisfied) {
      cout << s << endl;
    }
  }
  return 0;
}
