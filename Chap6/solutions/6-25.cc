#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string s = "";
  for (int i = 0; i < argc; i++) {
    const char *p = argv[i];
    s +=  string(p);
  }
  cout << s << endl;

  return 0;
}
