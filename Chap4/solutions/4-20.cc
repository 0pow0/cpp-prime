#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> vec {"abc"};
    vector<string>::iterator it = vec.begin();
    *it++;
    it = vec.begin();
    cout << "*it++" << "valid" << endl;
    //(*it)++;
    //it = vec.begin();
    //cout << "(*it)++" << " not valid" << endl;
    // *it.empty();
    // it = vec.begin();
    // cout << "*it.empty();" << " not valid" << endl;
    it->empty();
    it = vec.begin();
    cout << "it->empty();" << "valid" << endl;
    // ++*it;
    // it = vec.begin();
    // cout << "++*it" << " not valid" << endl;
    it++->empty(); 
    cout << "it++->empty();" << "valid" << endl;
    return 0;
}
