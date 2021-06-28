#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  // 2014年5月19日は735369
  int a = 735369;
  int y, m, d;
  cin >> y >> m >> d;
  if (m == 1 || m == 2)
  {
    y = y - 1;
    m = 12 + m;
  }
  cout << a - ((365 * y) + (y / 4) - (y / 100) + (y / 400) + (306 * (m + 1) / 10) + d - 429) << endl;
  return 0;
}