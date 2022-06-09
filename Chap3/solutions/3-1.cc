#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char const *argv[])
{
    int i = 50, res = 0;
    while (i <= 100)
    {
        res += (i++);
    }
    i = 10;
    while (i >= 0)
    {
        cout << i-- << "\n";
    }
    int j = 0;
    cout << " i = ";
    cin >> i;
    cout << " j = ";
    cin >> j;
    for (int k = i; k <= j; k++)
    {
        cout << k;
    }
    cout << "\n";

    return 0;
}
