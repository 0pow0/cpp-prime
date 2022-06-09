#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
  list<string> names; 
  vector<const char*> old_style {"123", "123"};
  names.assign(old_style.begin(), old_style.end());
  // old_style.assign(names.cbegin(), names.cend());
  names.assign({"123"});
  names.assign(10, "123");
  
  vector<string> svec(10);
  vector<string> svec1(24);
swap(svec, svec1);
  return 0;
}
