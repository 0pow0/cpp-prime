#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vec {1,2,3,4,5,6,7,8};
  auto begin = vec.begin();
  while (begin != vec.end()) {
    ++begin;
    vec.insert(begin, 42);
    ++begin;
  }
  return 0;
}
