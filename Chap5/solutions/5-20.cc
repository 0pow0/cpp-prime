#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, pre;
    while (cin >> s) {
        if (s == pre && isupper(s[0])) break;
        pre = s;
    }
    if (s == pre) cout << "Has repeat" << endl;
    else cout << "No repeat" << endl;
    return 0;
}
