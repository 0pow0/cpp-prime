
int (*foo(int i, int j))[10] {
  return (int (*)[10]) new int[10];
}

auto foo1(int i, int j) -> int (*)[10] {
}

typedef int arrT[10];
arrT* foo2(int i, int j) {}

using arrT1 = int[10];
arrT1* foo3(int i, int j) {}

int arr[10] = {0};
decltype(arr)* foo4(int i, int j) {}

int main(int argc, char const *argv[])
{
  int (*p)[10] = foo(1, 2);
  delete[] p;
  return 0;
}
