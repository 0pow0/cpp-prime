#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int grade = 80;
    (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
    return 0;
}
