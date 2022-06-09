#include "Sales_data.h"
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  string out_path = argv[1];
  ofstream ofs (out_path, ofstream::out | ofstream::app);
  Sales_data total;
  ifstream is ("/Users/zuorui/Code/cpp_primer/Chap8/solutions/trans.txt");
  if (read(is, total)) {
    Sales_data trans;
    while (read(is, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      }
      else {
        print(ofs, total) << endl;
        total = trans;
      }
    }
    print(ofs, total) << endl;
  }
  else {
    cerr << "No data!" << endl;
  }
  return 0;
}
