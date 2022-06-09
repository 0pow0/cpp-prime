#include <stack>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

template<class T>
ostream &operator<< (ostream &os, stack<T> &stk) {
  while (stk.size() > 0) {
    os << stk.top() << " ";
    stk.pop();
  }
  return os;
}

int calc (int e1, int e2, char op) {
  switch (op) {
    case '+':
      return e1 + e2;
    case '-':
      return e1 - e2;
    case '*':
      return e1 * e2;
    case '/':
      return e1 / e2;
    default:
      return 0;
  }
}


int eval_int(string s) {
  static string addsub = "+-";
  static string muldiv = "*/";

  string::size_type pos = 0;
  while ((pos = s.find_first_of(' ', pos)) != string::npos) {
    s.replace(pos, 1, "");
    pos = pos+1;
  }

  s.insert(0, "(");
  s.insert(s.size(), ")");

  stack<char> optor;
  stack<int> opnd;
  for (string::size_type i = 0; i < s.size();) {
    switch(s[i]) {
      case '+':
      case '-':
      case '(':
        optor.push(s[i]);
        i++;
        break;
      case '*':
      case '/':
        {
          if (s[i+1] > 47 && s[i+1] < 58) {
            int opnd1 = opnd.top();
            opnd.pop();
            int opnd2 = stoi(s.substr(i+1));
            opnd.push(calc(opnd1, opnd2, s[i]));
            i++;
            while (opnd2 > 0) {
              i++;
              opnd2 /= 10;
            }
          }
          else {
            string::size_type right = s.find_first_of(')', i+1); 
            int len = right - i;
            int opnd2 = eval_int(s.substr(i+1, len));
            int opnd1 = opnd.top();
            opnd.pop();
            opnd.push(calc(opnd1, opnd2, s[i]));
            i += len+1;
          }
        }
        break;
      case ')':
        {
          while (optor.top() != '(') {
            int opnd2 = opnd.top();
            opnd.pop();
            int opnd1 = opnd.top();
            opnd.pop();
            char op = optor.top();
            optor.pop();
            opnd.push(calc(opnd1, opnd2, op));
          }
          optor.pop();
          i++;
        }
        break;
      default:
        {
          int num = stoi(s.substr(i));
          opnd.push(num);
          while (num > 0) {
            i++;
            num /= 10;
          }
        }
        break;
    }
  }
  return opnd.top();
} 

int main(int argc, char const *argv[])
{
  cout << eval_int("(10+2*(30-1*2)+1)") << endl;
  return 0;
}

