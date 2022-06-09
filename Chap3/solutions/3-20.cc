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
    vector<int> vec;
    int a;
    while (cin >> a) {
        vec.push_back(a);
    }
    for (int i = 0; i < vec.size(); i += 2) {
        cout << vec[i] + vec[i+1] << " ";
    }
    cout << endl;
    for (int i = 0; i <= vec.size() / 2; i++) {
        if (i == vec.size()-1-i) cout << vec[i];
        else cout << vec[i] + vec[vec.size()-1-i] << " ";
    }
    cout << endl;
    return 0;
}
