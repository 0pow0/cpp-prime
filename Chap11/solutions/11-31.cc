#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  multimap<string, string> m;
  multimap<string, string>::iterator it;
  if ((it = m.find("Rui Zuo")) != m.end())
    m.erase(it);
  return 0;
}
