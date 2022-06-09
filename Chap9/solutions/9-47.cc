#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string s = "ab2c3d7R4E6";
  string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
  string::size_type pos = 0;
  while ((pos = s.find_first_of("123456789", pos)) != string::npos) {
    cout << s[pos++] << " ";
  }
  cout << endl;

  pos = 0;
  while ((pos = s.find_first_of(alphabet, pos)) != string::npos) {
    cout << s[pos++] << " ";
  }
  cout << endl;

  pos = 0;
  while ((pos = s.find_first_not_of(alphabet, pos)) != string::npos) {
    cout << s[pos++] << " ";
  }
  cout << endl;

  pos = 0;
  while ((pos = s.find_first_not_of("123456789", pos)) != string::npos) {
    cout << s[pos++] << " ";
  }
  cout << endl;

  return 0;
}
