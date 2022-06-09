#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec {1, 2, 3};
    int arr[3]{0};
    int idx = 0;
    for (const int& e : vec) {
        arr[idx++] = e;
    }
    for (const int& e : arr) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
