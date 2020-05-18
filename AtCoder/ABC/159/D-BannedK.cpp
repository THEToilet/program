#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
ll choose2(ll n)
{
  return n * (n - 1) / 2;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) a[i]--;
  vector<int> cnt(n);
  rep(i, n) cnt[a[i]]++;
  ll tot = 0;
  rep(i, n)
  {
    tot += choose2(cnt[i]);
  }
  rep(i, n)
  {
    ll ans = tot;
    ans -= choose2(cnt[a[i]]);
    ans += choose2(cnt[a[i]] - 1);
    // - 3C2 + 2C2
    cout << ans << endl;
  }
  return 0;
}