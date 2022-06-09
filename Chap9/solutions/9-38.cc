#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> v;
  v.reserve(10);
  for (int i = 0; i < 10; i++) v.push_back(i);
  cout << "v.size() = " << v.size() << " v.capacity() = " << v.capacity() << endl;
  v.push_back(0);
  cout << "v.size() = " << v.size() << " v.capacity() = " << v.capacity() << endl;
  return 0;
}
