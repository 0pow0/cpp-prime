#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s {"Hello, World"};
    string::size_type idx = 0;
    while (idx < s.size()) {
        s[idx] = 'X';
        idx++;
    }
    cout << s << endl;
    return 0;
}
