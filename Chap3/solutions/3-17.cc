#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

template<typename T>
ostream& operator <<(ostream& os, vector<T> vec) {
    os << "size = " << vec.size() << endl;
    for (auto& e : vec) {
        os << " " << e;
    }
    os << endl;
    return os;
}

int main(int argc, char const *argv[])
{
    vector<string> words;
    string s;
    while (cin >> s) {
        words.push_back(s);
    }
    cout << words;

    for (auto& word : words) {
        for (auto& c : word) {
            cout << (char)toupper(c);
        }
        cout << endl;
    }
    return 0;
}
