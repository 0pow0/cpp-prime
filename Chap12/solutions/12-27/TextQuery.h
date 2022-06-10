#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <memory>
#include <set>

typedef std::shared_ptr<std::vector<std::string>> pLines;
typedef std::shared_ptr<std::set<uint64_t>> pWordIdx;

class QueryResult {
friend std::ostream &print(std::ostream &os, const QueryResult &res);
public:
  QueryResult();
  QueryResult(pLines, pWordIdx);
  size_t size();
private:
  pLines plines;
  pWordIdx pidx;
};

class TextQuery {
public:
  TextQuery(std::ifstream&);
  QueryResult query(std::string);
private:
  pLines plines;
  std::unordered_map<std::string, pWordIdx> wordMap;
};

std::ostream &print(std::ostream &os, QueryResult &res);