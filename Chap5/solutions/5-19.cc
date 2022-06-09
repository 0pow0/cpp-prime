#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    do {
        cout << "input two strings" << endl;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() < s2.size()) cout << s1 << " is shorter" << endl;
        else cout << s2 << " is shorter" << endl;
    } while(1);
    return 0;
}
