#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    char chars[10] {'a', 'a', 'a', 'a'};
    for (const char& c : chars) {
        cout << c << " ";
    }
    cout << endl;
    char* p = chars;
    for (int i = 0; i < 10; i++) {
        cout << (int) *p << ' ';
        p++;
    }
    cout << endl;
    string str1 = chars;
    string str2 {chars};
    cout << str1 << endl;
    cout << str2 << endl;

    int arr[3] {1, 2, 3};
    vector<int> vec {begin(arr), end(arr)};
    vector<int> vec2 {arr, arr+1};
    return 0;
}
