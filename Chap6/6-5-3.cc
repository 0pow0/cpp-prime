#include <iostream>

using namespace std;

void print(const int ia[], size_t size) {
#ifndef NDEBUG
  cerr << __func__ << ": array size is " << size << endl;
#endif
}

int main(int argc, char const *argv[])
{
  const int ia[] = {1, 2, 3};
  print(ia, 19);
  return 0;
}
