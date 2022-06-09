#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

ostream &operator<< (ostream &os, const vector<string> vec) {
  for (const auto &e : vec) {
    os << e << " ";
  }
  return os;
}

void elimDups (vector<string> &words) {
  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
  elimDups(words);
  sort(words.begin(), words.end(), [](const string &a, const string &b) -> bool { return a.size() < b.size(); });
  auto end_find = find_if(words.begin(), words.end(), [sz](const string &a) -> bool { return a.size() >= sz; });
  for_each (end_find, words.end(), [](const string &a) -> void { cout << a << " "; });
  cout << endl;
}

int main(int argc, char const *argv[])
{
  vector<string> words {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
  biggies(words, 4);
  return 0;
}

