#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

ostream &operator<<(ostream & os, const forward_list<string> &flst) {
  for (auto &e : flst) {
    os << e << " ";
  }
  return os;
}

void insert(forward_list<string> &flst, const string &p, const string &e) {
  auto it = flst.begin();
  auto pre = flst.before_begin();
  while (it != flst.end() && *it != p)
    pre = it++;
  if (it == flst.end()) {
    flst.insert_after(pre, e);
  }
  else flst.insert_after(it, e);
}

int main(int argc, char const *argv[])
{
  forward_list<string> flst {"123", "1", "2", "3", "4", "5", "6"};
  insert(flst, "12", "a");
  cout << flst << endl;
  insert(flst, "1", "b");
  cout << flst << endl;
  return 0;
}


