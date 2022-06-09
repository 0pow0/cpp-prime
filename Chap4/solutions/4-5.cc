#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    assert(-30 * 3 + 21 / 5 == -86);
    assert(-30 + 3 * 21 / 5 == -18);
    assert(30 / 3 * 21 % 5 == 0);
    assert(-30 / 3 * 21 / 4 == -52);
    return 0;
}