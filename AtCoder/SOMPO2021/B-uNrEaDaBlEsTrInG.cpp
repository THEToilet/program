#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  bool ans = true;
  rep(i, s.size())
  {
    if ((i + 1) % 2 == 0)
    {
      if (!isupper(s.at(i)))
      {
        ans = false;
      }
    }
    else
    {
      if (isupper(s.at(i)))
      {
        ans = false;
      }
    }
  }
  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}