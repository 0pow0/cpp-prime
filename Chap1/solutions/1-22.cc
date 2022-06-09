#include <iostream>
#include "../Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_item item, sum{"123"};
  while (cin >> item) {
    if (sum.isbn() == item.isbn())
      sum += item;
  }
  cout << sum << endl;
  return 0;
}

