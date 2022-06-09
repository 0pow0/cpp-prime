#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

ostream &operator<< (ostream &os, const vector<int> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[])
{
  vector<int> vec;
  vec.resize(10);
  cout << vec << endl;
  fill_n(vec.begin(), 10, 1);
  cout << vec << endl;
}
