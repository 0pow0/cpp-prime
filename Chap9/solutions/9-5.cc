#include <vector>

using namespace std;

vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end, int n) {
  while (beg != end) {
    if (*beg == n) return beg;
    beg++;
  }
  return end;
}

int main(int argc, char const *argv[])
{
  return 0;
}
