#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, vector<string>> family;
  family["He"].push_back("Lin He");
  family["He"].push_back("Yabo He");
  family["He"].push_back("Kun He");
  return 0;
}

