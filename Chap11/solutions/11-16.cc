#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  map<int, string> m {{1, "123"}};
  m.begin()->second = "2";
  cout << m.begin()->first << " " << m.begin()->second << endl;
  return 0;
}
