#include <iostream>

using namespace std;

int fact(int v);

int main(int argc, char const *argv[])
{
  int a = 0;
  while (cin >> a) {
    cout << "fact(a) = " << fact(a) << endl;
  }
  return 0;
}

int fact(int v) {
  if (v == 1) return 1;
  return v * fact(v-1);
}