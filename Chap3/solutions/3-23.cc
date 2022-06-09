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
    vector<int> vec(10, 2);
    for (auto it = vec.begin(); it != vec.end(); it++) {
        (*it) *= 2;
    }
    cout << vec;
    return 0;
}
