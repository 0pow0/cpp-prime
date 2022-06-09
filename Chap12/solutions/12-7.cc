#include <memory>
#include <iostream>
#include <vector>

using namespace std;

using pointer_type = shared_ptr<vector<int>>;

pointer_type foo1() {
  return make_shared<vector<int>>();
}

pointer_type &foo2(pointer_type &p) {
  int a = 1;
  while (cin >> a) {
    p->push_back(a);
  }
  return p;
}

void foo3(pointer_type &p) {
  for (const auto e : *p) {
    cout << e << " ";
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {
  pointer_type p(foo1());
  foo3(foo2(p));
  return 0;
}

