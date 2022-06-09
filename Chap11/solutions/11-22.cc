#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, vector<int>> m;
  pair<map<string, vector<int>>::iterator, bool> ret = 
    m.insert({"123", vector<int>{1, 2, 3}});
  return 0;
}
