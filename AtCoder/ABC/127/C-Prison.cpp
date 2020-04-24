#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  int l = 0;
  int r = 1e8;
  rep(i, M)
  {
    int L, R, t = 0;
    cin >> L >> R;
    l = max(l, L);
    r = min(r, R);
  }
  if (l <= r)
  {
    cout << r - l + 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }
  return 0;
}