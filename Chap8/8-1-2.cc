#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  cout << "cin.rdstate() " << cin.rdstate() << endl;
  cout << "cin.goodbit " << cin.goodbit << " " << cin.good() << endl;
  cout << "cin.failbit " << cin.failbit << " " << cin.fail() << endl;
  cout << "cin.badbit " << cin.badbit << " " << cin.bad() << endl;
  cout << "cin.eofbit " << cin.eofbit << " " << cin.eof() << endl;
  int a; 
  cin >> a;
  cout << endl;
  cout << "cin.rdstate() " << cin.rdstate() << endl;
  cout << "cin.goodbit " << cin.goodbit << " " << cin.good() << endl;
  cout << "cin.failbit " << cin.failbit << " " << cin.fail() << endl;
  cout << "cin.badbit " << cin.badbit << " " << cin.bad() << endl;
  cout << "cin.eofbit " << cin.eofbit << " " << cin.eof() << endl;
  cin.clear();
  cout << endl;
  cout << "cin.rdstate() " << cin.rdstate() << endl;
  cout << "cin.goodbit " << cin.goodbit << " " << cin.good() << endl;
  cout << "cin.failbit " << cin.failbit << " " << cin.fail() << endl;
  cout << "cin.badbit " << cin.badbit << " " << cin.bad() << endl;
  cout << "cin.eofbit " << cin.eofbit << " " << cin.eof() << endl;
  cin.ignore();
  cin >> a;
  cout << endl;
  cout << "cin.rdstate() " << cin.rdstate() << endl;
  cout << "cin.goodbit " << cin.goodbit << " " << cin.good() << endl;
  cout << "cin.failbit " << cin.failbit << " " << cin.fail() << endl;
  cout << "cin.badbit " << cin.badbit << " " << cin.bad() << endl;
  cout << "cin.eofbit " << cin.eofbit << " " << cin.eof() << endl;
  return 0;
}
