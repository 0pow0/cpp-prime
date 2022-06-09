#include <string>
#include <cctype>
#include <iostream>
#include <typeinfo>
#include <type_traits>

using namespace std;
template <typename T> std::string type_name();
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string:";
    cin >> s;
    for (auto& c : s) {
        cout << type_name<decltype(c)>();
        if (!ispunct(c)) cout << c;
    }
    cout << endl;

    return 0; 
}
