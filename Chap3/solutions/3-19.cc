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
    vector<int> vec1(10, 42);
    cout << vec1;
    vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    cout << vec2;
    vector<int> vec3;
    for (int i = 0; i < 10; i++) {vec3.push_back(42);}
    cout << vec3;
    return 0;
}

