#include <vector>

using namespace std;

bool find(vector<int>::iterator beg, vector<int>::iterator end, int n) {
  while (beg != end) {
    if (*beg == n) return true;
    beg++;
  }
  return false;
}

int main(int argc, char const *argv[])
{
  return 0;
}
