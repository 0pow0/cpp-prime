#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    int count  = 0, strCount = 0, tabCount = 0, spaceCount = 0, newLineCount = 0;
    while (cin.get(c)) {
        if (c == 'f') {
            cin.get(c);
            if (c == 'f' || c == 'l' || c == 'i') strCount++;
        }
        if (c == '\t') tabCount++;
        else if (c == ' ') spaceCount++;
        else if (c == '\n') newLineCount++;
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    cout << "count = " << count << endl;
    cout << "strCount = " << strCount << endl;
    cout << "tabCount = " << tabCount << endl;
    cout << "spaceCount = " << spaceCount << endl;
    cout << "newLineCount = " << newLineCount << endl;
    return 0;
}
