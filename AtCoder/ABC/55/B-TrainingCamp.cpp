#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

const ll mod = 1e9 + 7;

int main()
{
  ll N;
  cin >> N;
  ll ans = 1;
  for (int i = 1; i <= N; i++)
  {
    ans = (ans * i) % mod;
  }
  cout << ans << endl;
  return 0;
}