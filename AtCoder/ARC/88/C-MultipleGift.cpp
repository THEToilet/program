#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll X, Y;
  cin >> X >> Y;
  int ans = 0;
  while (X <= Y)
  {
    X = X * 2;
    ans++;
  }
  cout << ans << endl;
  return 0;
}