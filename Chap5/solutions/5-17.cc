#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1 {1, 2, 3, 4};
    vector<int> v2 {1, 2, 3, 4, 5};

    vector<int> *rs, *rl;
    if (v1.size() < v2.size()) {
        rs = &v1;
        rl = &v2;
    }
    else if (v1.size() > v2.size()) {
        rs = &v2;
        rl = &v1;
    } 
    int i;
    for (i = 0; i < rs->size(); i++) {
        if ((*rs)[i] != (*rl)[i]) break;
    }
    if (i == (rs->size())) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
