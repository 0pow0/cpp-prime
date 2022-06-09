#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    for (const int(&row)[4] : ia)
    {
        for (const int &e : row)
        {
            std::cout << e << std::endl;
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }

    for (int (*row)[4] = ia; row != ia+3 ; row++) {
        for (int *e = *row; e != *row+4; e++) {
            cout << *e << endl;
        }
    }

    using int_array_4 = int[4];
    typedef int int_array_4[4];

    // 3-44
    for (int_array_4 *row = ia; row != ia+3; row++) {
        for (int *e = *row; e != *row+4; e++) {
            cout << *e << endl;
        }
    }

    // 3-45
    for (auto &row : ia) {
        for (auto &e : row) {
            cout << e << endl;
        }
    }

    for (auto row = ia; row != ia+3; row++) {
        for (auto e = *row; e != *row+4; e++) {
            cout << *e << endl;
        }
    }

    return 0;
}
