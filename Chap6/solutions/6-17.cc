#include <string>
#include <cctype>
#include <iostream>

using namespace std;

void foo1(const string &s) {
  for (char e : s) {
    if (isupper(e)) {
      cout << "true" << endl;
      break;
    }
  }
}
 void foo2(string &s) {
   for (char &e : s) {
     e = tolower(e);
   }
 }

 int main(int argc, char const *argv[])
 {
   /* code */
   return 0;
 }
 