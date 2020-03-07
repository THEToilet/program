#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str, p;
  string oldstr;
  string order;
  stack<char> st;
  int q, a, b;
  cin >> str;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> order;
    if (order == "replace")
    {
      cin >> a >> b >> p;
      if (a == 0)
      {
        str = p + str.substr(b + 1, str.size());
      }
      else if (b == str.size())
      {
        str = str.substr(0, a) + p;
      }
      else
      {
        str = str.substr(0, a) + p + str.substr(b + 1, str.size());
      }
   //   cout << str << "\n";
    }
    else
    {
      cin >> a >> b;
      if (order == "reverse")
      {
        for (int i = a; i < b + 1; i++)
        {
          st.push(str.at(i));
        }
        while (!st.empty())
        {
          oldstr += st.top();
          st.pop();
        }
        if (a == 0)
        {
          str = oldstr + str.substr(b + 1, str.size());
        }
        else if (b == str.size())
        {
          str = str.substr(0, a) + oldstr;
        }
        else
        {
          str = str.substr(0, a) + oldstr + str.substr(b + 1, str.size());
        }
  //      cout << str << "\n";
      }
      else
      {
        if (b == str.size())
        {
          cout << str.substr(a, b) << "\n";
        }
        else
        {
          cout << str.substr(a, b) << "\n";
        }
      }
    }
  }
}