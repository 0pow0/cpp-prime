#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> letters {"F", "D", "C", "B", "A", "A++"};
    int grade = 91;
    (grade >= 60) ? cout << "grade: " << letters[(grade-50)/10] << endl : cout << "grade: " << letters[0] << endl;

    return 0;
}
