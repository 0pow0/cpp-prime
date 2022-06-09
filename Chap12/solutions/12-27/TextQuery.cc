#include <iostream>
#include <sstream>

#include "TextQuery.h"

using namespace std;

QueryResult::QueryResult(): 
  plines(nullptr),
  pidx(nullptr)
{}

QueryResult::QueryResult(pLines pl, pWordIdx pidx):
  plines(pl),
  pidx(pidx)
{}

size_t QueryResult::size() {
  return pidx->size();
}

TextQuery::TextQuery(std::ifstream &file) {
  plines = make_shared<std::vector<string>>();
  string line;
  uint64_t lineNumber = 0;
  while (getline(file, line)) {
    plines->push_back(line);
    istringstream words(line);
    string word;
    while (words >> word) {
      bool exist = wordMap.count(word);
      if (exist) {
        wordMap.at(word)->insert(lineNumber);
      } else {
        wordMap[word] = make_shared<set<uint64_t>>(initializer_list<uint64_t>{lineNumber});
      }
    }
    lineNumber++;
  }
}

QueryResult TextQuery::query(std::string word) {
  if (wordMap.count(word)) {
    return QueryResult(plines, wordMap[word]);
  }
  else return QueryResult();
}

ostream &print(ostream &os, QueryResult &&res) {
  os << "element occurs " << res.size() << " times" << endl;
  for (auto const e : *(res.pidx)) {
    os << "\t(line " << e+1 << ") " << (*res.plines)[e] << endl;
  }
  return os;
}