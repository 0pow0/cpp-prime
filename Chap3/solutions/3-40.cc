
#include <cstring>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    char carr1[] = "123";
    char carr2[] = "456";
    int len = strlen(carr1) + strlen(carr2) + 1;
    char res[len];
    strcpy(res, strcat(carr1, carr2));
    cout << string(res) << endl;
    return 0;
}
