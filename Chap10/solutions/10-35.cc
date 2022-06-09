#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto it = vec.cend() - 1; it != vec.cbegin(); it--) {
    cout << *it << " ";
  }
  cout << *vec.cbegin() << endl;
  return 0;
}

