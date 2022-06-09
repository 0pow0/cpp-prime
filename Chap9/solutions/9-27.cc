#include <forward_list>
#include <iostream>

using namespace std;

ostream &operator<<(ostream & os, const forward_list<int> &flst) {
  for (auto &e : flst) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[])
{
  forward_list<int> flst {0, 1, 2, 3, 4, 5, 6, 7};
  auto it = flst.begin();
  auto pre = flst.before_begin();
  while (it != flst.end()) {
    if (*it % 2 != 0) {
      it = flst.erase_after(pre);
    }
    else {
      pre = it;
      ++it;
    }
  } 
  cout << flst << endl;
  return 0;
}

