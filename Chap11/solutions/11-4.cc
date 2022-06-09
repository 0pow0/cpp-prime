#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, size_t> wordCount;
  string word;
  while (cin >> word) {
    string::iterator beg = word.begin();
    string::iterator end = beg;
    while ((end = find_if(beg, word.end(), [](const char &c) {return ispunct(c);})) != word.end()) {
      string tmp (beg, end);
      transform(tmp.begin(), tmp.end(), tmp.begin(), [](const char &c) {return tolower(c);});
      ++wordCount[tmp];
      beg = end+1;
    }
    string tmp (beg, end);
    transform(tmp.begin(), tmp.end(), tmp.begin(), [](const char &c) {return tolower(c);});
    ++wordCount[tmp];
  }
  for (const auto &e : wordCount) {
    cout << e.first << " " << e.second << endl;
  }
  return 0;
}

