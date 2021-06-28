#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int X;
  cin >> X;
  int tmp = 0, ans = 0;
  while (1)
  {
    tmp += X;
    ans++;
    if (tmp % 360 == 0) //&& tmp >= 360)
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}