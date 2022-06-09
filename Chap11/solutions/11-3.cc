#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, size_t> wordCount;
  string word;
  while (cin >> word) {
    ++wordCount[word];
  }
  for (const auto &e : wordCount) {
    cout << e.first << " " << e.second << endl;
  }
  return 0;
}

