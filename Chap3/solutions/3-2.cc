#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    while (getline(cin, str))
    {
        cout << "getline: " << str << endl;
    }
    // clear err state
    cin.clear(ios_base::goodbit);
    // clear EOF bits
    clearerr(stdin);
    while (cin >> str)
    {
        cout << "cin: " << str << endl;
    }
    return 0;
}
