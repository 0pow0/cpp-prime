#include <vector>
#include <iostream>

using namespace std;

template<typename T>
ostream& operator <<(ostream& os, vector<T> vec) {
    os << "size = " << vec.size() << endl;
    for (auto it = vec.cbegin(); it != vec.cend(); it++) {
        os << *it << " ";
    }
    os << endl;
    return os;
}

int main(int argc, char const *argv[])
{
    vector<string> sentences{"Today is a good day!", "", "I'm going to buy a cup of coffee"};
    for (auto it = sentences.cbegin(); it != sentences.cend() && !it->empty(); it++) {
        cout << *it;
    }
    cout << endl;
    return 0;
}
