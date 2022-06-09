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
    vector<int> vec;
    int a;
    while (cin >> a) {
        vec.push_back(a);
    }
    for (auto it = vec.cbegin(); it != vec.cend(); it++) {
        if (it+1 != vec.cend()) {
            cout << (*it) + *(it+1);
            it++;
        }
        else cout << *it;
    }
    cout << endl;
    for (auto it = vec.cbegin(); it < vec.cbegin() + vec.size()/2; it++) {
        auto it2 = vec.cend() - 1 - (it - vec.cbegin());
        if (it != it2) cout << (*it) + *(it2) << " ";
        else cout << *it << " ";
    }
    cout << endl;
    return 0;
}
