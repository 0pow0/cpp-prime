#include <vector>
#include <list>
#include <iostream>

using namespace std;

template<class T>
ostream &operator<<(ostream& os, vector<T> vec) {
  for (const auto &e : vec) {
    os << e << ' ';
  }
  return os;
}

int main(int argc, char const *argv[])
{
  list<int> l {1, 2, 3};
  vector<double> vec(l.begin(), l.end());
  cout << vec << endl;

  vector<int> vec2 {1, 2, 3};
  vector<double> vec3 (vec2.begin(), vec2.end());
  cout << vec3 << endl;
  return 0;
}

