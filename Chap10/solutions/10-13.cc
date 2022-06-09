#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

#include "../../Chap2/solutions/Sales_data.h"

using namespace std;

ostream &operator<< (ostream &os, const vector<Sales_data> vec) {
  for (const auto &e : vec) {
    os << e.bookNo << " ";
  }
  return os;
}

bool isShorterThan5(const string &s) {
  return s.size() < 5;
}

int main(int argc, char const *argv[])
{
  vector<string> vec {"123456", "123", "1234", "123456", "123"};
  vector<string>::iterator it = partition(vec.begin(), vec.end(), isShorterThan5);
  for (; it != vec.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}
