#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Date {
  friend ostream &operator<<(ostream &os, const Date &date);
  public:
  Date(string s) {
    year = month = day = -1;
    string digits = "0123456789";
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<string> month1 {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    vector<string> month2 {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (s.find('/') != string::npos) {
      string::size_type pos1 = s.find_first_of('/');
      string::size_type pos2 = s.find_first_of('/', pos1+1);
      month = stoi(s.substr(0, pos1));
      day = stoi(s.substr(pos1+1, pos2-pos1-1));
      year = stoi(s.substr(pos2+1, 4));
    }
    else if (s.find_first_of(alphabet) != string::npos) {
      for (unsigned i = 0; i < 11; i++) {
        if (s.find(month1[i]) != string::npos || s.find(month2[i]) != string::npos) {
          month = i + 1;
          break;
        }
      }
      string::size_type pos = 0;
      while ((pos = s.find_first_of(digits, pos)) != string::npos) {
        string::size_type end = s.find_first_of(digits, pos+1);
        if (end != string::npos) {
          if (day == -1) {
            day = stoi(s.substr(pos));
            pos = end + 1;
          }
          else {
            year = stoi(s.substr(pos));
            break;
          }
        }
      }
    }
  }
  private:
  int year, month, day;
};

ostream &operator<<(ostream &os, const Date &date) {
  os << date.month << " " << date.day << " " << date.year;
  return os;
}

int main(int argc, char const *argv[])
{
  Date date ("01/20/2022");
  cout << date << endl;
  date = Date("Jun 10 200");
  cout << date << endl;
  return 0;
}
