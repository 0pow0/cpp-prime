#include <memory>

using namespace std;

int main(int argc, char const *argv[]) {
  unique_ptr<int> p(new int(1));
  // unique_ptr<int> p1 = p;
  unique_ptr<int> p1(p.get());
  return 0;
}

