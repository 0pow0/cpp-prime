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
    vector<int> grades;
    int a;
    while (cin >> a) grades.push_back(a);
    vector<int> levels(11, 0);
    for (auto it = grades.cbegin(); it != grades.cend(); it++) {
        (*(levels.begin()+(*it)/10))++;
    }
    cout << levels;
    return 0;
}
