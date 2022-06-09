#include <memory>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  allocator<string> alloc;
  auto const p = alloc.allocate(2);
  auto q = p;
  alloc.construct(q++, "");
  alloc.construct(q++, 10, 'c');

  while (q != p) {
    alloc.destroy(--q);
  }
  return 0;
}
