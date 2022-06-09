#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

void elimDups(vector<string> &words) {
  string word;
  while (cin >> word) {
    words.push_back(word);
  }
  cout << words << endl;

  vector<string>::iterator it = unique(words.begin(), words.end());
  cout << words << endl;

  words.erase(it, words.end());
  cout << words << endl;
}

int main(int argc, char const *argv[])
{
  vector<string> words;
  elimDups(words);
}
