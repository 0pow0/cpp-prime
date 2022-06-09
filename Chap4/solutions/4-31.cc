#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type i = 0; i != ivec.size();
         i++, --cnt)
    {
        ivec[i] = cnt;
    }
    return 0;
}
