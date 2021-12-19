#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s, t;
  cin >> s >> t;
  bool ans = false;
  if (s == t)
  {
    ans = true;
  }
  else
  {
    for (ll k = 0; k < 27; k++)
    {
      string tmpST = s;
      for (ll i = 0; i < t.size(); i++)
      {
        tmpST.at(i) = ((tmpST[i] - 'a') + k) % 26 + 'a';
      }
      if (tmpST == t)
      {
        ans = true;
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