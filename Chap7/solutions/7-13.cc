#include <iostream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_data total(cin);
  while (cin) {
    Sales_data trans(cin);
    if (!cin) break;
    if (total.isbn() == trans.isbn()) {
      total.combine(trans);
    }
    else {
      print(cout, total) << endl;
      total = trans;
    }
  } 
  print(cout, total) << endl;
   
  return 0;
}
