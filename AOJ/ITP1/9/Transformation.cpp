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
      str.replace(a, p.size(), p);
   //   cout << str << "\n";
    }
    else
    {
      cin >> a >> b;
      if (order == "reverse")
      {
        // aからbまでを逆順
        for (int i = a; i < b + 1; i++)
        {
          st.push(str.at(i));
        }
        while (!st.empty())
        {
          oldstr += st.top();
          st.pop();
        }
      //  cout << oldstr << "\n"; // 連結
        str.replace(a, oldstr.size(), oldstr);
     //   cout << str << "\n";
        oldstr = "";
      }
      else
      {
        cout << str.substr(a, b - a + 1) << "\n";
      //  cout << str << "\n";
      }
    }
  }
}