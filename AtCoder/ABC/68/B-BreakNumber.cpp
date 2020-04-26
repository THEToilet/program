#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  int ans = 1;
  rep(i, 10)
  {
    if (ans == N)
    {
      cout << ans << endl;
      return 0;
    }
    else if (ans >= N)
    {
      cout << ans / 2 << endl;
      return 0;
    }
    ans *= 2;
  }
  return 0;
}