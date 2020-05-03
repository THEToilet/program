#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> p(N, 0);
  rep(i, K)
  {
    int d;
    cin >> d;
    rep(j, d)
    {
      int h;
      cin >> h;
      p[h - 1]++;
    }
  }
  int ans = 0;
  rep(i, N)
  {
    if (p[i] == 0)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}