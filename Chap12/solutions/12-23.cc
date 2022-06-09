#include <memory>
#include <iostream>

using namespace std;

int main() {
  char *concatenate_string = new char[strlen("hello " "world") + 1]();
  strcat(concatenate_string, "hello ");
  strcat(concatenate_string, "world");
  std::cout << concatenate_string << std::endl;
  delete [] concatenate_string;
}
