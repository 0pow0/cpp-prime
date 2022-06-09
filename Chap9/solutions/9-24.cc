#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vec;
  vec.at(0);
  cout << "at()" << endl;
  vec[0];
  cout << "subscript()" << endl;
  vec.front();
  cout << "front()" << endl;
  *vec.begin();
  cout << "*begin()" << endl;
  return 0;
}
