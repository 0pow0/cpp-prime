#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  multimap<string, string> m {
    {"Rui Zuo", "Rui's Book 1"},
    {"Rui Zuo", "Rui's Book 2"},
    {"Bui Zuo", "Bui's Book 1"},
    {"Aui Zuo", "Aui's Book 1"},
    {"Zui Zuo", "Zui's Book 1"},
    {"Gui Zuo", "Gui's Book 1"}
  };
  for (auto it = m.begin(); it != m.end(); ++it) {
    cout << "Author: " << it->first << " Book: " << it->second << endl;
  }
  return 0;
}
