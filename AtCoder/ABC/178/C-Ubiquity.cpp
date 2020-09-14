#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
const int MOD = 1000000007;
int main()
{
  ll N;
  cin >> N;
  ll tmp = (N * (N - 1) % MOD) % MOD;
  ll ans = 1;
  ll ans2 = 1;
  for (ll i = 0; i < N - 2; i++)
  {
    ans = ans * 9 % MOD;
    ans2 = ans2 * 10 % MOD;
  }
  cout << ans2 << endl;
  cout << ans << endl;
  cout << ans2 - ans * 2 % MOD << endl;
  cout << 1 - ((ans / ans2) % MOD);
  cout << tmp << endl;
  cout << tmp % MOD % MOD % MOD % MOD << endl;
  cout << ans % MOD + tmp << endl;
  cout << ans % MOD << endl;
  cout << ans % MOD * tmp % MOD << endl;
  cout << tmp % MOD << endl;
  return 0;
}