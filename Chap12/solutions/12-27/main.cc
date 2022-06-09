#include <fstream>
#include <iostream>
#include "TextQuery.h"

using namespace std;

int main(int argc, char const *argv[]) {
  ifstream file ("/Users/zuorui/Code/cpp_primer/Chap12/solutions/12-27/Sonnet I.txt");
  TextQuery tq(file);
  print(cout, tq.query("fairest"));
  print(cout, tq.query("the"));
  return 0;
}
