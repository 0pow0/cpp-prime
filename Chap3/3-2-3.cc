#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s{"Hello, World"};
    decltype(s.size()) punct_cnt = 0;

    for (char c : s)
    {
        if (ispunct(c))
            ++punct_cnt;
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;

    for (char& c : s) {
        c = toupper(c);
    }
    cout << s << endl;

    s = "Hello, World!";
    for (decltype(s.size()) idx = 0; idx < s.size() && !isspace(s[idx]); idx++) {
        s[idx] = toupper(s[idx]);
    }
    cout << s << endl;
    return 0;
}
