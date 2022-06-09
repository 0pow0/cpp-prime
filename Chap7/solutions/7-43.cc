#include <vector>
#include <iostream>

using namespace std;

class NoDefault {
public:
  explicit NoDefault(int a) {
    cout << "NoDefault(int a)" << endl;
  }
};

class C {
public:
  C() : nd(10) {
    cout << "C() : nd(10)" << endl;
  }
private:
  NoDefault nd;
};

int main(int argc, char const *argv[])
{
  vector<NoDefault> vec1{10};
  // vector<NoDefault> vec2(10);
  // vector<C> vec2(10);
  return 0;
}
