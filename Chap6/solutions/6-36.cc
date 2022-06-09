#include <string>

using namespace std;

string (&foo())[10];

typedef string strArr[10];
strArr& foo1();

using strArr1 = string[10];
strArr1& foo4();

auto foo2() -> string (&)[10];

string arr[10];
decltype(arr)& foo3();

int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
