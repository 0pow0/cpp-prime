#include <list>
#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  list<int> l;
  for (int i = 0; i < 10; ++i) {
    l.push_back(i);
  }

  deque<int> dqOdd, dqEvn;
  for (auto it = l.cbegin(); it != l.cend(); ++it) {
    if (*it % 2 == 0) {
      dqEvn.push_back(*it);
    }
    else dqOdd.push_back(*it);
  }

  for (auto it = dqOdd.cbegin(); it != dqOdd.cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  for (auto it = dqEvn.cbegin(); it != dqEvn.cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
