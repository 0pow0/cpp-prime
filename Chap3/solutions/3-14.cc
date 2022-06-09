#include <vector>
#include <iostream>

using namespace std;

ostream& operator <<(ostream& os, vector<int> vec) {
    for (auto& e : vec) {
        os << " " << e;
    }
    os << endl;
    return os;
}

int main(int argc, char const *argv[])
{
    int a;
    vector<int> vec;
    while(cin >> a) {vec.push_back(a);}
    cout << vec << endl;
    return 0;
}
