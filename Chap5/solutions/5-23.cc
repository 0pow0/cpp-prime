#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    do
    {
        try
        {
            while (cin >> a >> b)
            {
                if (b == 0)
                    throw std::runtime_error("divide by 0");
                cout << a / b << endl;
            }
        }
        catch (runtime_error e)
        {
            cout << e.what() << endl;
        }
    } while (1);
    return 0;
}
