#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    string pre = "";
    int cnt = 0;
    int res = 0;
    while (cin >> s) {
        cout << s << endl;
        if (s == pre) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        res = max(res, cnt);
        pre = s;
    }
    if (res == 0) cout << "No repeat word" << endl;
    else cout << res << " times " << endl;
    return 0;
}
