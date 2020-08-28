#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctype.h>
#include <stdio.h>
#include <stack>
using namespace std;
bool check_num(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (!isdigit(static_cast<unsigned char>(s[i])))
    {
      return false;
    }
  }
  return true;
}
int check_type(string s)
{
  if (check_num(s))
  {
    return 0;
  }
  else if (s == "+")
  {
    return 1;
  }
  else if (s == "*")
  {
    return 2;
  }
  else if (s == "*")
  {
    return 3;
  }
  else if (s == "/")
  {
    return 4;
  }
  else if (s == "++")
  {
    return 5;
  }
  else if (s == "@")
  {
    return 6;
  }
  else
  {
    return 7;
  }
}

int main(int argc, char *argv[])
{
  vector<string> l;
  string s, str;

  getline(cin, str);
  if(!check_num(str)){
    cout << "invalid" << endl;
    return 0;
  }
  stringstream ss{str};

  while (getline(ss, s, ' '))
  {
    l.push_back(s);
  }
  /*
  for (const string &s : l)
  {
    cout << s << endl;
  }
  */
  stack<int> stack;
  int j, k, n;
  for (int i = 0; i < l.size(); i++)
  {
    switch (check_type(l[i]))
    {
    case 0:
      stack.push(atoi(l[i].c_str()));
      break;
    case 1:
      if (stack.size() < 2)
      {
        cout << "invaild" << endl;
        return 0;
      }
      j = stack.top();
      stack.pop();
      k = stack.top();
      stack.pop();
      stack.push(k + j);
      break;
    case 2:
      if (stack.size() < 2)
      {
        cout << "invaild" << endl;
        return 0;
      }
      j = stack.top();
      stack.pop();
      k = stack.top();
      stack.pop();
      stack.push(k * j);
      //      cout << "*" << endl;
      break;
    case 3:
      if (stack.size() < 2)
      {
        cout << "invaild" << endl;
        return 0;
      }
      j = stack.top();
      stack.pop();
      k = stack.top();
      stack.pop();
      stack.push(k - j);
      //      cout << "-" << endl;
      break;
    case 4:
      if (stack.size() < 2)
      {
        cout << "invaild" << endl;
        return 0;
      }
      j = stack.top();
      stack.pop();
      k = stack.top();
      stack.pop();
      stack.push(k / j);
      break;
    case 5:
      if (stack.size() == 0)
      {
        cout << "invaild" << endl;
      }
      j = stack.top();
      stack.pop();
      j = j + 1;
      stack.push(j);
      break;
    case 6:
      if (stack.size() < 3)
      {
        cout << "invaild" << endl;
        return 0;
      }
      j = stack.top();
      stack.pop();
      k = stack.top();
      stack.pop();
      n = stack.top();
      stack.pop();
      stack.push(j * k + k * n + n * j);
      break;
    default:
      cout << "invaild" << s << endl;
      break;
    }
  }

  int ans = stack.top();
  cout << ans << endl;

  return 0;
}
