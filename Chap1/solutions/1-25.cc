#include <iostream>
#include "../Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_item total;
  if (cin >> total) {
    Sales_item trans;
    while (cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        cout << total << endl;
        total = trans;
      }
    }
    cout << total << endl;
  }
  return 0;
}
