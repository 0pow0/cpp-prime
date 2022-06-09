#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int aint = 2147483647;
    aint += 1;
    cout << "int overflow " << aint << endl;
    short ashort = 32767;
    ashort += 1;
    cout << "short overflow " << ashort << endl;

    int a = std::numeric_limits<int>::max();
    int b = a + 1;
    int c = std::numeric_limits<int>::min();
    int d = c - 1;
    int e = a / 2 + 1;
    int f = e * 2;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    return 0;
}