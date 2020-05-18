#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll N, T;
  cin >> N >> T;
  vector<ll> t(N);
  rep(i, N)
  {
    cin >> t[i];
  }
  ll ans = 0;
  rep(i, N)
  {
    if (i == N - 1)
    {
      ans += T;
    }
    else
    {
      ans += min(T, t[i + 1] - t[i]);
    }
  }
  cout << ans << endl;
  return 0;
}