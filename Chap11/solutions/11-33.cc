#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

map<string, string> build_map(ifstream &rules) {
  map<string, string> res;
  string k, v;
  while (rules >> k && getline(rules, v)) {
    if (v.size() <= 1) continue;
    v = v.substr(1);
    res.insert({k, v});
  }
  return res;
}

const string &transform(const string &word, const map<string, string> &rules) {
  map<string, string>::const_iterator it;
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
  ifstream rules("/Users/zuorui/Code/cpp_primer/Chap11/solutions/rules.txt");
  ifstream input("/Users/zuorui/Code/cpp_primer/Chap11/solutions/input.txt");
  word_transform(rules, input);
  return 0;
}
