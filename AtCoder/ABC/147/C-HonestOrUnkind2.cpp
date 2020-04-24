#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

// https://youtu.be/tNyPYIhy9Ms

int g[15][15];

int main()
{
  int N;
  cin >> N;
  rep(i, N)
  {
    rep(j, N)
    {
      g[i][j] = -1;
    }
  }

  rep(i, N)
  {
    int A;
    cin >> A;
    rep(j, A)
    {
      int a, x;
      cin >> a >> x;
      a--;
      g[i][a] = x;
    }
  }

  int ans = 0;
  rep(i, 1 << N) /*2^N*/
  {
    vector<int> d(N);
    rep(j, N)
    {
      if (i >> j & 1)
      { // 誠実な人か不誠実の人かを入力 (ex) 001001
        d[j] = 1;
      }
    }
    bool ok = true;
    rep(j, N)
    {
      if (d[j])
      {
        rep(k, N)
        {
          if (g[j][k] == -1)
          {
            continue;
          }
          if (g[j][k] != d[k])
          {
            ok = false;
          }
        }
      }
    }
    if (ok)
    {
      ans = max(ans, __builtin_popcount(i)); // 1の個数
    }
  }
  cout << ans << endl;
  return 0;
}
