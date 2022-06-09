#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

#include "../../Chap1/Sales_item.h"

using namespace std;

ostream &operator<< (ostream &os, const vector<Sales_item> vec) {
  for (const auto &e : vec) {
    os << e << endl;
  }
  return os;
}
bool compareIsbn2(const Sales_item &s1, const Sales_item &s2) {
  return s1.isbn() < s2.isbn();
}
int main(int argc, char const *argv[]) {
  istream_iterator<Sales_item> iter(cin), eof;
  vector<Sales_item> vec (iter, eof);
  sort (vec.begin (), vec.end (), compareIsbn);

  for (auto beg = vec.begin(), end = beg; end != vec.end(); beg = end) {
    end = find_if(beg, vec.end(), [beg](const Sales_item &s) {return s.isbn() != beg->isbn();});
    cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
  }

  return 0;
}
