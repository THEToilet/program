#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  char a[100][101], b[102][102];
  int H, W;
  cin >> H >> W;
  rep(i, H)
  {
    cin >> a[i];
  }
  // #いっぱい
  rep(i, H + 2)
  {
    rep(j, W + 2)
    {
      b[i][j] = '#';
    }
  }
  // copy
  rep(i, H)
  {
    rep(j, W)
    {
      b[i + 1][j + 1] = a[i][j];
    }
  }
  rep(i, H + 2)
  {
    rep(j, W + 2)
    {
      cout << b[i][j];
    }
    cout << endl;
  }
  return 0;
}