#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 0;
  vector<int> vec;
  while (cin >> a) {
    vec.push_back(a);
  }
  int target = 10;
  cout << count(vec.begin(), vec.end(), target) << "elements equal to 10 " << endl;
  return 0;
}
