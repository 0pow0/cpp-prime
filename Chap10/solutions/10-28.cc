#include <algorithm>
#include <list>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;
using namespace::placeholders;

ostream &operator<< (ostream &os, const vector<int> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

ostream &operator<< (ostream &os, const list<int> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[]) {
  vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> v2; 
  vector<int> v3; 
  vector<int> v4; 
  copy(v1.begin(), v1.end(), front_inserter(v2));
  cout << v2 << endl;
  copy(v1.begin(), v1.end(), back_inserter(v3));
  cout << v3 << endl;
  copy(v1.begin(), v1.end(), inserter(v4, v4.begin()));
  cout << v4 << endl;
  return 0;
}

