#include <string>
#include <iostream>

using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char const *argv[])
{
  Sales_data total;
  double price = 0.0;
  if (cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = price * total.units_sold;
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> price) {
      trans.revenue = price * trans.units_sold;
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
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
