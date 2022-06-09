
int main(int argc, char const *argv[])
{
  int a = 10;
  auto f = [a]() mutable -> bool {
    if (a != 0) a--;
    return a == 0;
  };
  f();
  return 0;
}
