#include <vector>
#include <list>
#include <iostream>

using namespace std;

int cmp_vec(list<int> v1, vector<int> v2) {
  int n = min(v1.size(), v2.size());
  list<int>::iterator it = v1.begin();
  for (int i = 0; i < n; ++i, it++) {
    if ((*it) != v2[i]) return (*it) - v2[i];
  }
  return (v1.size() == v2.size()) ? 0 : v1.size() - v2.size();
}

int main(int argc, char const *argv[])
{
  vector<int> v2 {1, 2, 3};
  list<int> v1 {2, 3, 4};
  cout << cmp_vec(v1, v2) << endl;
  return 0;
}
