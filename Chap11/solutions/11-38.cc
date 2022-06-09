#include <unordered_map>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

void wordCount () {
  unordered_map<string, int> count;
  string word;
  while (cin >> word) {
    ++count[word];
  }
  for (auto it = count.begin(); it != count.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
}

unordered_map<string, string> build_map(ifstream &rules) {
  unordered_map<string, string> res;
  string k, v;
  while (rules >> k && getline(rules, v)) {
    if (v.size() <= 1) continue;
    v = v.substr(1);
    res.insert({k, v});
  }
  return res;
}

const string &transform(const string &word, const unordered_map<string, string> &rules) {
  unordered_map<string, string>::const_iterator it;
  if ((it = rules.find(word)) != rules.end())
    return it->second;
  else return word; 
}

void word_transform(ifstream &rules, ifstream &input) {
  auto map = build_map(rules);
  
  string line;
  while (getline(input, line)) {
    string word;
    bool first_word = true;
    istringstream iss(line);
    while (iss >> word) {
      if (first_word) first_word = false;
      else cout << " ";
      cout << transform(word, map);
    }
    cout << endl;
  }
}

int main(int argc, char const *argv[]) {
  wordCount();

  ifstream rules("/Users/zuorui/Code/cpp_primer/Chap11/solutions/rules.txt");
  ifstream input("/Users/zuorui/Code/cpp_primer/Chap11/solutions/input.txt");
  word_transform(rules, input);
  return 0;
}
