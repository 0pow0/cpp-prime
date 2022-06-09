#include <vector>
#include <iostream>

using namespace std;

ostream &operator<<(ostream & os, const vector<int> &vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

int main(int argc, char const *argv[])
{
  vector<int> vec {1, 2, 3, 4, 5};
  auto it1 = vec.begin();
  auto it2 = it1;
  vec.erase(it1, it2);
  cout << "it1 == it2" << endl;
  cout << vec << endl;

  it1 = vec.begin();
  it2 = vec.end();
  vec.erase(it1, it2);
  cout << "it2 == end" << endl;
  cout << vec << endl;

  vec = {1, 2, 3, 4, 5};
  it1 = vec.end();
  it2 = vec.end();
  cout << "it1 == it2 == end" << endl;
  cout << vec << endl;
  return 0;
}
