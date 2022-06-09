#include <utility>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

void solution1 () {
  vector<pair<string, int>> vec;
  string str;
  int a;
  while (cin >> str >> a) {
    vec.push_back(pair<string, int>(str, a));
  }
}

void solution2() {
  vector<pair<string, int>> vec;
  string str;
  int a;
  while (cin >> str >> a) {
    vec.push_back({str, a});
  }
}

int main(int argc, char const *argv[]) {
  vector<pair<string, int>> vec;
  string str;
  int a;
  while (cin >> str >> a) {
    vec.push_back(make_pair(str, a));
  }
  return 0;
}
