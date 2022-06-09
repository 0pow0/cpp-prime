#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int& e : vec) {
        e % 2 == 0 ?  : e *= 2;
    }
    for (const int& e : vec) {
        cout << e << " " << endl;
    }
    return 0;
}
