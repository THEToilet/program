#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  int a = 0;
  ll ans = 0;
  rep(i, S.size())
  {
    if (S[i] == 'B')
    {
      ++a;
    }
    else
    {
      ans += a;
    }
  }
  cout << ans << endl;
  return 0;
}