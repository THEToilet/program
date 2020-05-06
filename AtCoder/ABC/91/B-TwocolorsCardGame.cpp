#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N;
  map<string, int> m;
  rep(i, N)
  {
    string tmp;
    cin >> tmp;
    m[tmp]++;
  }
  cin >> M;
  rep(i, M)
  {
    string tmp;
    cin >> tmp;
    m[tmp]--;
  }
  int ans = -10000;
  for (auto a : m)
  {
    ans = max(ans, a.second);
  }
  if (ans < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}