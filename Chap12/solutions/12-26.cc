#include <memory>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  uint8_t n = 10;
  allocator<int> alloc;
  auto const head = alloc.allocate(n);
  auto p = head;
  for (uint8_t i = 0; i < n; ++i) {
    alloc.construct(p++, i);
  }

  p = head;
  for (uint8_t i = 0; i < n; ++i, p++) {
    cout << *p << " ";
  }
  cout << endl;

  p = head;
  for (uint8_t i = 0; i < n; ++i, p++) {
    alloc.destroy(p);
  }
  alloc.deallocate(head, n);

  return 0;
}


