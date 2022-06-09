#include "Sales_data.h"
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  Sales_data total;
  ifstream is ("/Users/zuorui/Code/cpp_primer/Chap8/solutions/trans.txt");
  if (read(is, total)) {
    Sales_data trans;
    while (read(is, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      }
      else {
        print(cout, total) << endl;
        total = trans;
      }
    }
    print(cout, total) << endl;
  }
  else {
    cerr << "No data!" << endl;
  }
  return 0;
}
