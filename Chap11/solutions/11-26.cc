#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, int> m{{"123", 123}};
  map<string, int>::key_type k = m.begin()->first;
  map<string, int>::mapped_type v;
  return 0;
}

