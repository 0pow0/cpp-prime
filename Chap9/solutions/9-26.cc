#include <vector>
#include <iostream>
#include <list>

using namespace std;

ostream &operator<<(ostream & os, const vector<int> &vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}
ostream &operator<<(ostream & os, const list<int> &vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[])
{
  int ia[] = {0, 1, 2, 3, 4, 5, 6};
  vector<int> vec (begin(ia), end(ia));
  list<int> li (begin(ia), end(ia));
  for (auto it = vec.begin(); it != vec.end();) {
    if (*it % 2 == 0) it = vec.erase(it);
    else it++;
  }
  cout << vec << endl;
  for (auto it = li.begin(); it != li.end();) {
    if (*it % 2 != 0) it = li.erase(it);
    else it++;
  }
  cout << li << endl;
  return 0;
}
