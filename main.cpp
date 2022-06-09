#include <iostream>
#include <string>

using std::string;

int main(int, char **)
{
    string str;
    while (std::cin >> str)
    {
        std::cout << str << std::endl;
    }
    return 0;
}
