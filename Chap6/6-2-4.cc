
void print(int (&arr) [10]) {
}

void print(int (*arr)[10]) {}

int main(int argc, char const *argv[])
{
  int i = 0, j[2] = {1, 2};
  int k[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // print(i);
  // print(j);
  print(k);
  // print(&i);
  print(&k);

  return 0;
}
