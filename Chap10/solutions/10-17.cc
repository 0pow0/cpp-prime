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

bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
  return s1.bookNo < s2.bookNo;
}

int main(int argc, char const *argv[])
{
  vector<Sales_data> vec (3);
  for (int i = 0; i < 3; i++) {
    vec[i].bookNo = "isbn-" + to_string(5-i);
  }
  sort(vec.begin(), vec.end(), [](const Sales_data &a, const Sales_data &b) -> bool {return a.bookNo < b.bookNo; });
  cout << vec << endl;
}
