#include <iostream>
#include <string>

using namespace std;

class Sales_data
{
public:
  Sales_data(string isbn, unsigned units_sold, unsigned price) : bookNo(isbn), units_sold(units_sold), revenue(units_sold * price)
  {
    cout << "Sales_data(string isbn, unsigned units_sold, unsigned price)" << endl;
  }
  Sales_data(string isbn) : Sales_data(isbn, 0, 0)
  {
    cout << "Sales_data(string isbn)" << endl;
  }
  Sales_data(unsigned units_sold, unsigned price) : Sales_data("", units_sold, price)
  {
    cout << "Sales_data(unsigned units_sold, unsigned price) : Sales_data("", units_sold, price)" << endl;
  }

private:
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char const *argv[])
{
  Sales_data data1{"12", 1, 10};
  cout << endl;
  Sales_data data2{"123"};
  cout << endl;
  Sales_data data3{10, 1};
  cout << endl;
  return 0;
}
