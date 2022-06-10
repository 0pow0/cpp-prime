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

TextQuery::TextQuery(std::ifstream &file):
  plines(new vector<string>) {
  string line;
  uint64_t lineNumber = 0;
  while (getline(file, line)) {
    plines->push_back(line);
    istringstream words(line);
    string word;
    while (words >> word) {
      // bool exist = wordMap.count(word);
      // if (exist) {
        // wordMap.at(word)->insert(lineNumber);
      // } else {
        // wordMap[word] = make_shared<set<uint64_t>>(initializer_list<uint64_t>{lineNumber});
      // }
      auto &p = wordMap[word];
      if (!p)
        p.reset(new set<uint64_t>);
      p->insert(lineNumber);
    }
    lineNumber++;
  }
}

QueryResult TextQuery::query(std::string word) {
  static pWordIdx nodata(new set<uint64_t>);
  if (wordMap.count(word)) {
    return QueryResult(plines, wordMap[word]);
  }
  else return QueryResult(plines, nodata);
}

ostream &print(ostream &os, const QueryResult &res) {
  os << "element occurs " << res.pidx->size() << " times" << endl;
  for (auto const e : *(res.pidx)) {
    os << "\t(line " << e+1 << ") " << (*res.plines)[e] << endl;
  }
  return os;
}