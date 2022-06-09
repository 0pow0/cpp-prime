#include <iostream>
#include "Screen.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(std::cout);
  cout << endl;
  myScreen.display(cout);
  cout << endl;
  return 0;
}
