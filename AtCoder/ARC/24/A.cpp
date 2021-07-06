#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int L, R;
  map<int, int> m;
  cin >> L >> R;
  //cout << L << R;
  rep(i, L)
  {
    int tmp;
    cin >> tmp;
    m[tmp]++;
  }
  int ans = 0;
  rep(j, R)
  {
    int tmp;
    cin >> tmp;
    if (m[tmp] > 0)
    {
      ans++;
      m[tmp]--;
    }
  }
  cout << ans << endl;
  return 0;
}