#include <vector>
#include <iostream>

using namespace std;

ostream &operator<<(ostream& os, vector<int> vec) {
  for (const auto &e : vec) {
    os << e << ' ';
  }
  return os;
}

int main(int argc, char const *argv[])
{
  vector<int> vec;
  cout << vec << endl;;

  vector<int> vec1(vec);
  cout << vec1 << endl;

  vector<int> vec2 {1, 2, 3};
  cout << vec2 << endl;

  vector<int> vec3 (vec2.begin(), vec2.end());
  cout << vec3 << endl;

  vector<int> vec4 (10);
  cout << vec4 << endl;

  vector<int> vec5 (10, 1);
  cout << vec5 << endl;
  return 0;
}
