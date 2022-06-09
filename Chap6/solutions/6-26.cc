#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  for (int i = 0; i < argc; i++) {
    const char *p = argv[i];
    cout << string(p) << endl;
  }

  return 0;
}
