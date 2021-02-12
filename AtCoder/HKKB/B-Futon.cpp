#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  rep(i, H)
  {
    cin >> S[i];
  }
  int ans = 0;
  rep(i, H)
  {
    bool flag = false;
    rep(j, W)
    {
      if (S.at(i).at(j) == '.')
      {
        if (W - 1 != j && S.at(i).at(j + 1) == '.')
        {
          ans++;
        }
        if (H - 1 != i && S.at(i + 1).at(j) == '.')
        {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}