#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> h(N);
  rep(i, N)
  {
    cin >> h[i];
  }
  sort(h.begin(), h.end());
  int ans = 1e9;
  for (int i = 0; i < N - K + 1; i++)
  {
    int tmp = h[i + K - 1] - h[i];
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}