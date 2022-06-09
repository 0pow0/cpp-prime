#include <iostream>

using namespace std;

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
  int a = 10, b = 20;
  swap(&a, &b);
  cout << "a = " << a <<  " b = " << b << endl; 
  return 0;
}

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}
