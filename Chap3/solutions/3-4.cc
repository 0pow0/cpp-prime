#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << ((str1 == str2) ? "equal" : ((str1 > str2) ? (str1 + " is larger") : (str2 + " is larger"))) << endl;
    cout << ((str1.size() == str2.size()) ? "equal size" : ((str1.size() > str2.size()) ? (str1 + " is longer") : (str2 + " is longer"))) << endl;
    return 0;
}
