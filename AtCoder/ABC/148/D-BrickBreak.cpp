#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  int ans = 0;
  int next = 1;
  rep(i, N)
  {
    if (next != a[i])
    {
      ans++;
    }
    else
    {
      next++;
    }
  }
  if (ans == a.size())
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}