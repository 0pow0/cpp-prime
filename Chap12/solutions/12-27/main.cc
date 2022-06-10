#include <fstream>
#include <iostream>
#include "TextQuery.h"

using namespace std;

int main(int argc, char const *argv[]) {
  ifstream file ("/Users/zuorui/Code/cpp_primer/Chap12/solutions/12-27/Sonnet I.txt");
  TextQuery tq(file);
  print(cout, tq.query("faiest"));
  print(cout, tq.query("thes"));
  return 0;
}
