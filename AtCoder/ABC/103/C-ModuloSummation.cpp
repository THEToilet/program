#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

// a mod b を最大化するには a = a-1

int main()
{
  int N;
  cin >> N;
  vector<ll> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  ll ans = 0;
  rep(i, N)
  {
    ans += a[i] - 1;
  }
  cout << ans << endl;
  return 0;
}