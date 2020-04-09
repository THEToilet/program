#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int inf = 1000000000; // 10^9
int main()
{
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, N)
  {
    cin >> X[i];
  }
  int R = X[0];
  int L = X[0];
  rep(i, N)
  {
    L = min(L, X[i]);
    R = max(R, X[i]);
  }

  int ans = inf;
  for (int i = L; i <= R; i++)
  {
    int cost = 0;
    rep(j, N)
    {
      cost += (X[j] - i) * (X[j] - i);
    }
    ans = min(ans, cost);
  }
  cout << ans << endl;
}
