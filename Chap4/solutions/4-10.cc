#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    while (cin >> a && a != 42) {
        cout << a <<  " ";
    }
    cout << endl;
    return 0;
}
