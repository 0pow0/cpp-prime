#include <vector>
#include <iostream>

using namespace std;

void show_vec(const vector<int> &v, vector<int>::iterator it) {
  if (it == v.end()) return;
  cout << *it << endl;
  show_vec(v, it+1);
}

int main(int argc, char const *argv[])
{
  vector<int> v {1, 2, 3, 4};
  show_vec(v, v.begin());
  return 0;
}
