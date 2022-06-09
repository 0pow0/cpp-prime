#include <vector>
#include <iostream>

using namespace std;

template<class T>
int cmp_vec(vector<T> v1, vector<T> v2) {
  if (v1.size() == v2.size()) {
    for (int i = 0; i < v1.size(); ++i) {
      if (v1[i] != v2[i]) return v1[i] - v2[i];
    }
    return 0;
  }
  else {
    int n = min(v1.size(), v2.size());
    for (int i = 0; i < n; ++i) {
      if (v1[i] != v2[i]) return v1[i] - v2[i];
    }
    return v1.size() - v2.size();
  }
}

template<class T>
int cmp_vec2(vector<T> v1, vector<T> v2) {
  int n = min(v1.size(), v2.size());
  for (int i = 0; i < n; ++i) {
    if (v1[i] != v2[i]) return v1[i] - v2[i];
  }
  return (v1.size() == v2.size()) ? 0 : v1.size() - v2.size();
}

int main(int argc, char const *argv[])
{
  vector<int> v1 {1, 2, 3}, v2 {2, 3, 4};
  cout << cmp_vec(v1, v2) << " " << cmp_vec(v1, v2) << endl;
  return 0;
}
