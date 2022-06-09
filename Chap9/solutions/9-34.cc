#include <vector>
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const vector<int> &vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  os << endl;
  return os;
}

int main(int argc, char const *argv[])
{
  vector<int> vec {1,2,3,4,5,6,7,8};
  auto begin = vec.begin();
  while (begin != vec.end()) {
    if (*begin % 2) {
      begin = vec.insert(begin, *begin);
      ++begin;
      if (begin != vec.end()) ++begin;
    }
    else ++begin;
  }
  cout << vec << endl;
  return 0;
}
