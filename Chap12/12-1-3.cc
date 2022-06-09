#include <memory>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  shared_ptr<int> p = make_shared<int> (10);
  shared_ptr<int> p1(p);
  *p = 20;
  cout << *p1 << endl;
  return 0;
}
