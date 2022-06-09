#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

void concat()
{
    string str1, str;
    while (cin >> str1)
    {
        str += str1;
    }
    cout << str << endl;
}

void concat_by_space()
{
    string str1, str;
    if (cin >> str) {
        while (cin >> str1) {
            str += ' ' + str1;
        }
    }
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    concat();
    cin.clear();
    clearerr(stdin);
    concat_by_space();

    return 0;
}