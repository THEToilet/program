#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  ll ans;
  vector<ll> A(N);
  for (ll i = 0; i < N; i++)
  {
    ll a;
    cin >> a;
    A[i] = a;
  }
  sort(A.begin(), A.end());
  for (ll i = 0; i < N; i++)
  {
    if (i == 0)
      ans = A[0];
    else
    {
      ans *= A[i];
    }
  }
  if (ans >
      1000000000000000000LL)
  {
    cout << -1 << endl;
    return 0;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}