#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
ll M = 1e9 + 7;
ll factorial(ll n)
{
  ll ans = 1;
  for (ll i = 1; i <= n; i++)
  {
    ans = (ans * i) % M;
  }
  return ans;
}

int main()
{
  ll N, K;
  cin >> N >> K;
  map<string, int> mp;
  vector<int> A(N + 1);
  rep(i, N + 1)
  {
    A[i] = 100 + i;
  }
  vector<ll> B(N + 1 - K + 1);
  ll count = 0;
  ll ans = 0;
  for (ll i = K; i <= N + 1; i++)
  {
    B[count] = factorial(N + 1) / factorial(i) / factorial(N + 1 - i);
    cout << B[count] << endl;
    ans += B[count] % M;
    count++;
  }
  cout << ans << endl;
}