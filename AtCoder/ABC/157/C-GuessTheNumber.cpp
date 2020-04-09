#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> P(M);
  rep(i, M)
  {
    cin >> P[i].first >> P[i].second;
  }
  // 全探査
  rep(x, 1000)
  {
    int nx = x / 10;
    vector<int> d(1, x % 10);
    // 分解
    while (nx)
    {
      d.push_back(nx % 10);
      nx /= 10;
    }
    reverse(d.begin(), d.end());
    if (d.size() != N)
    {
      continue;
    }
    bool is = true;
    rep(i, M)
    {
      if (d[P[i].first - 1] != P[i].second)
      {
        is = false;
      }
    }
    if (is)
    {
      cout << x << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}