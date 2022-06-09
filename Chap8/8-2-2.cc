#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  string path = "/Users/zuorui/Code/cpp_primer/Chap8/solutions/trans.txt";
  // ofstream ofs(path, ofstream::out | ofstream::app);
  ofstream ofs(path); 
  ofs.close();
  return 0;
}
