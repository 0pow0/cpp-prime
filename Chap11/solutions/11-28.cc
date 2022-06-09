#include <vector>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, vector<int>> m;
  map<string, vector<int>>::iterator it = m.find("123");
  return 0;
}
