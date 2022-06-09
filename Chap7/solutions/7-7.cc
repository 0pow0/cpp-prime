#include <iostream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_data total;
  double price = 0.0;
  if (read(cin, total)) {
    Sales_data trans;
    while (read(cin, trans)){
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      }
      else {
        print(cout, total);
        total = trans;
      }
    }
    print(cout, total);
  } 
  return 0;
}
