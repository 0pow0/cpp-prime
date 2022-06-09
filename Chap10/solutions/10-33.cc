#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
  ifstream ifs("/Users/zuorui/Code/cpp_primer/Chap10/solutions/in.txt"); 
  ofstream oddOfs("/Users/zuorui/Code/cpp_primer/Chap10/solutions/odd.txt"); 
  ofstream evenOfs("/Users/zuorui/Code/cpp_primer/Chap10/solutions/even.txt"); 
  istream_iterator<int> it(ifs), eof;
  ostream_iterator<int> oddIt(oddOfs), evenIt(evenOfs);
  while (it != eof) {
    if (*it % 2 == 0) *oddIt++ = *it++;
    else *evenIt++ = *it++;
  }
  return 0;
}

