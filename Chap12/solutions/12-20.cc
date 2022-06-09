#include "StrBlob.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  StrBlob blob;
  while (cin >> s) {
    blob.push_back(s);
  }
  StrBlobPtr it = blob.begin();
  for (int i = 0; i < blob.size(); it.incr()) {
    cout << it.deref() << " ";
    i++;
  }
  cout << endl;
  return 0;
}
