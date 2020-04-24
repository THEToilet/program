#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> broken(N + 1);
  rep(i, M)
  {
    int a;
    cin >> a;
    broken[a] = 1;
  }
  vector<int> dp(N + 2);
  const int mod = 1e9 + 7;
  dp[N] = 1;
  for (int i = N - 1; i >= 0; i--)
  {
    if (broken[i])
    {
      dp[i] = 0;
      continue;
    }
    dp[i] = (dp[i + 1] + dp[i + 2]) % mod;
  }
  cout << dp[0] << endl;
  return 0;
}