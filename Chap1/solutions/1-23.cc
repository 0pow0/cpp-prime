#include <iostream>
#include "../Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_item item;
  cin >> item;
  Sales_item cur;
  while (cin >> cur) {
    if (cur.isbn() == item.isbn())
      item += cur;
    else {
      cout << item << endl;
      item = cur;
    }
  }
  return 0;
}

