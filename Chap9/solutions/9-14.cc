#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
  list<char*> l {"123", "23"};
  vector<string> v;
  v.assign(l.begin(), l.end());
  return 0;
}

