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
  vec.reserve(10);
  cout << vec.size() << " " << vec.capacity() << endl;
  // vec.size() = 0
  fill_n(vec.begin(), 10, 1);
  cout << vec << endl;
}
