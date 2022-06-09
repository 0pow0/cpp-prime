#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s {"Hello, World"};
    for (char c : s) {
        c = 'X';
    }
    cout << s << endl;
    return 0;
}
