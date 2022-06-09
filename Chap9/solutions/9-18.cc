#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string s;
  deque<string> deq;
  while (cin >> s) {
    deq.push_back(s);
  }
  for (auto it = deq.cbegin(); it != deq.cend(); ++it) {
    cout << *it << " ";
  }
  return 0;
}
