#include <utility>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<pair<string, int>> vec;
  string str;
  int a;
  while (cin >> str >> a) {
    vec.push_back(make_pair(str, a));
  }
  return 0;
}
