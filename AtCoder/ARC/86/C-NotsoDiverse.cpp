#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  map<int, int> m;
  rep(i, N)
  {
    int a;
    cin >> a;
    m[a]++;
  }
  int ans = 0;

  if (m.size() <= K)
  {
    cout << 0 << endl;
  }
  else
  {
    int tmp = m.size() - K;
    vector<int> t(m.size());
    int co = 0;
    for (auto i : m)
    {
      t[co] = i.second;
      co++;
    }
    sort(t.begin(), t.end());
    rep(i, tmp)
    {
      ans += t[i];
    }
    cout << ans << endl;
  }
  return 0;
}