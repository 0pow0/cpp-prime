#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[5] {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        *(a+i) = 0;
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i];
    }
    return 0;
}
