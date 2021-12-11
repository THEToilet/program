#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

template <class T>
void chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
  }
}

int main()
{
  ll n, W;
  cin >> n >> W;
  vector<ll> weight(n), value(n);
  rep(i, n)
  {
    cin >> value.at(i) >> weight.at(i);
  }

  ll www = W;

  vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(W + 1, vector<ll>(www + 1, 0)));

  for (ll i = 0; i < n; i++)
  {
    for (ll w = 0; w <= W; w++)
    {
      for (ll j = 0; j <= www; j++)
      {
        if (w - weight.at(i) * j >= 0)
        {
          chmax(dp[i + 1][w][j], dp[i][w - (weight.at(i) * j)][j] + value.at(i) * j);
        }
        chmax(dp[i + 1][w][j], dp[i][w][0]);
      }
    }
  }

  cout << dp[n][W][www] << endl;
  return 0;
}