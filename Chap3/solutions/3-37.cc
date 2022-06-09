#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char* p = ca;
    while (*p) {
        cout << *p << '\t';
        p++;
    }
    cout << endl;
    return 0;
}
