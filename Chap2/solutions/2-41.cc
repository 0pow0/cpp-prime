#include <iostream>
#include "2-40.cc"
#include <vector>
#include <string>

using namespace std;

void p1_23() {
  vector<Sales_data> vec; 
  Sales_data tmp;
  double price;
  while (cin >> tmp.bookNo >> tmp.unit_sold >> price) {
    bool has = false;
    for (auto it = vec.begin(); it != vec.end(); it++) {
      if (it->bookNo == tmp.bookNo) {
        it->unit_sold += tmp.unit_sold;
        it->revenue += price * tmp.unit_sold;
        it->cnt_record++;
        has = true;
        break;
      }
    }
    if (!has) {
      tmp.revenue = price * tmp.unit_sold;
      vec.push_back(tmp);
    }
  }
  for (const Sales_data &e : vec) {
    cout << e.bookNo << " " << e.unit_sold << " " << e.revenue << " " << e.cnt_record << endl;
  }
}

int main(int argc, char const *argv[])
{
  Sales_data data;
  // double price = 0.0;
  // while (cin >> data.bookNo >> data.unit_sold >> price) {
    // data.revenue = price * data.unit_sold;
    // cout << data.bookNo << " " << data.unit_sold << " " << data.revenue << endl;
  // } 

  // Sales_data tmp;
  // double price = 0.0;
  // if (cin >> data.bookNo >> data.unit_sold >> price) {
    // data.revenue = price * data.unit_sold;
    // if (cin >> tmp.bookNo >> tmp.unit_sold >> price) {
      // tmp.revenue = price * tmp.unit_sold;
      // if (tmp.bookNo == data.bookNo) {
        // cout << "yes" << endl;
        // data.unit_sold += tmp.unit_sold;
        // data.revenue += tmp.revenue;
      // }
    // }
    // cout << data.bookNo << " " << data.unit_sold << " " << data.revenue << endl;
  // }

  // Sales_data tmp;
  // double price = 0.0;
  // if (cin >> data.bookNo >> data.unit_sold >> price) {
    // data.revenue = price * data.unit_sold;
    // while (cin >> tmp.bookNo >> tmp.unit_sold >> price) {
      // tmp.revenue = price * tmp.unit_sold;
      // if (tmp.bookNo == data.bookNo) {
        // data.unit_sold += tmp.unit_sold;
        // data.revenue += tmp.revenue;
      // }
    // }
    // cout << data.bookNo << " " << data.unit_sold << " " << data.revenue << endl;
  // }

  p1_23();
  return 0;
}
