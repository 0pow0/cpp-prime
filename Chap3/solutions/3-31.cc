#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    int aux[10];
    for (int i = 0; i < 10; i++) {
        aux[i] = arr[i];
    }
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }
    vector<int> aux_vec {vec};
    return 0;
}
