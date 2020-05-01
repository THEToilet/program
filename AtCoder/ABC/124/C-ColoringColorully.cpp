#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;

  int ans = S.size();
  //(0 or 1)
  for (int i = 0; i < 2; i++)
  {
    int cnt = 0;
    rep(j, S.size())
    {
      // (char)(0 + '0') -> '0'
      // (char)(1 + '0') -> '1'
      if (j % 2 == 0 && S[j] != (char)(i + '0'))
      {
        cnt++;
      }
      if (j % 2 == 1 && S[j] == (char)(i + '0'))
      {
        cnt++;
      }
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}