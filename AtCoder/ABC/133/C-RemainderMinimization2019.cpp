#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main()
{
  ll L, R;
  cin >> L >> R;
  R = min(R, L + 4038);
  int ans = 2018;
  for (ll i = L; i <= R; i++)
  {
    for (ll j = i + 1; j <= R; j++)
    {
      int x = i * j % 2019;
      ans = min(ans, x);
    }
  }
  cout << ans << endl;
  return 0;
}