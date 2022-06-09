#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vec {1, 2, 3};
  cout << "sum = " << accumulate(vec.cbegin(), vec.cend(), 0) << endl;
}
