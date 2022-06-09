#include <iostream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_data total;
  double price = 0.0;
  if (cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = price * total.units_sold;
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> price) {
      trans.revenue = price * trans.units_sold;
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      }
      else {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
  } 
  return 0;
}
