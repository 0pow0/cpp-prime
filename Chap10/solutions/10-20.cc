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

int main(int argc, char const *argv[]) {
  vector<string> words {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
  cout << count_if(words.begin(), words.end(), [](const string &word) { return word.size() > 3; }) << endl;
  return 0;
}

