#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

class Sales_data {
friend Sales_data add(const Sales_data &item1, const Sales_data &item2);
friend std::istream &read(std::istream &is, Sales_data &item);
friend std::ostream &print(std::ostream &os, const Sales_data &item);
public:
  Sales_data() = default;
  Sales_data(const std::string &s) : bookNo(s) { }
  Sales_data(const std::string &s, unsigned n, double p) : 
             bookNo(s), units_sold(n), revenue(n*p) { }
  Sales_data(std::istream &is) {
    read(is, *this);
  }
  Sales_data(int foo) {};
  std::string isbn() const {return bookNo;}
  Sales_data& combine(const Sales_data &rhs);
private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
  unsigned cnt_record = 0;
};

inline
double Sales_data::avg_price() const {
  return revenue/(double) units_sold;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}
std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
  return os;
}
std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0.0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

#endif // SALES_DATA_H