#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<string> v;
  string s;
  while (cin >> s) {
    v.push_back(s);
  }
  int sum = 0;
  for (const string &e : v) {
    sum += stoi(e);
  }
  cout << sum << endl;

  s = "";
  vector<string> v1;
  cin.clear();
  while (cin >> s) {
    v1.push_back(s);
  }
  double sum1 = 0.0;
  for (const string &e : v1) {
    sum1 += stod(e);
  }
  cout << sum1 << endl;
  return 0;
}
