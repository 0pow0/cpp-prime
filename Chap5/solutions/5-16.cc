#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    while (cin >> i) {
        cout << i << endl;
    }

    for (int i = 0; cin >> i;) {
        cout << i << endl;
    }

    for (int i = 0; i < 10; ++i) {
        cout <<  i << endl;
    }

    int i = 0;
    while (i < 10) {
        cout << i << endl;
    }
    return 0;
}
