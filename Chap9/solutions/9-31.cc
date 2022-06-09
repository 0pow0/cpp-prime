#include <list>
#include <iostream>

using namespace std;

ostream &operator<<(ostream & os, const list<int> &flst) {
  for (auto &e : flst) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[])
{
  list<int> lst {1, 2, 3, 4, 5};
  auto iter = lst.begin();
  while (iter != lst.end()) {
    if (*iter % 2) {
      iter = lst.insert (iter, *iter);
      ++iter;
      ++iter;
    }
    else iter = lst.erase (iter);
  }
  cout << lst << endl;
  return 0;
}
