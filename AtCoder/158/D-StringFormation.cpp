#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  string olds;
  string news;
  string c;
  int Q, T, F;
  stack<char> stack;
  cin >> s; 
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
  //  cout << 2;
    cin >> T;
    if (T == 1)
    { /*
      for (int k = 0; k < s.size(); k++)
      {
        stack.push(s.at(k));
      }
      while(!stack.empty())
      {
        olds += stack.top();
        stack.pop();
      }*/
      for (int m = (s.size()-1); m > 0; m--)
      {
        cout << s.at(m);
        olds += s.at(m);
      }
   //   cout << "d";
      s = olds;
    //  cout << s << endl;;
      olds = "";
    }
    else
    {
      cin >> F;
      cin >> c;
      if (F == 1)
      {
        news += c;
        news += s;
        s = news;
      }
      else
      {
        s += c;
      }
      news = "";
    }
  //    cout << s << "\n";
  }
  cout << s << "\n";
}