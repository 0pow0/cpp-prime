#include <vector>
#include <iostream>

using namespace std;

vector<int> *foo1() {
  return new vector<int> ();
}

vector<int> *foo2(vector<int> *v) {
  int a = 0;
  while (cin >> a) {
    v->push_back(a);
  }
  return v;
}

void foo3(vector<int> *v) {
  for (const auto e : *v) {
    cout << e << " ";
  }
  cout << endl;
  delete v;
}

int main(int argc, char const *argv[]) {
  foo3(foo2(foo1()));
  return 0;
}

