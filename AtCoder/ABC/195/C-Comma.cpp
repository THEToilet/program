#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
ll count(ll);
int main()
{
  ll N;
  cin >> N;
  ll ans = 0;
  vector<ll> a = {999,
                  999999,
                  999999999,
                  999999999999,
                  999999999999999};
  for (int i = 0; i < a.size(); i++)
  {
    if (N >= a.at(i) + 1)
    {
      ans += N - a.at(i);
    }
  }

  cout << ans << endl;
  return 0;
}