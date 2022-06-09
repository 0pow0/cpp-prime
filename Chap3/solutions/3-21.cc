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
    vector<int> v1;
    cout << "vector<int> v1" << endl;
    cout << v1;
    v1 = vector<int>(10);
    cout << "vector<int>(10)" << endl;
    cout << v1;
    v1 = vector<int>(10, 42);
    cout << "vector<int>(10, 42)" << endl;
    cout << v1;
    v1 = vector<int>{10};
    cout << "vector<int>{10}" << endl;
    cout << v1;
    v1 = vector<int>{10, 42};
    cout << "vector<int>{10, 42}" << endl;
    cout << v1;
    vector<string> v2{10};
    cout << "vector<string>{10}" << endl;
    cout << v2;
    v2 = vector<string>{10, "hi"};
    cout << "vector<string>{10, \"hi\"}" << endl;
    cout << v2;
    return 0;
}
