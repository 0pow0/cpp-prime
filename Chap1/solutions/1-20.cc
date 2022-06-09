#include <iostream>
#include "../Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_item item;
  while (cin >> item) {
    cout << item << endl;
  }
  return 0;
}

