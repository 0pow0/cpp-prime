#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string a = "";
  vector<string> vec;
  while (cin >> a) {
    vec.push_back(a);
  }
  string target = "abc";
  cout << count(vec.begin(), vec.end(), target) << "elements equal to abc " << endl;
  return 0;
}
