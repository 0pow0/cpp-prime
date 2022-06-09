#include <map>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, vector<pair<string, string>>> family;
  family["He"].push_back(pair<string, string>("Yabo He", "1968-06-27"));
  return 0;
}

