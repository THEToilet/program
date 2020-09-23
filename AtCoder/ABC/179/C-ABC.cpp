#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll N;
  cin >> N;
  ll a, b, c;
  ll ans = 0;
  for (c = 1; c < N; c++)
  {
    for (a = 1; a * a <= N; a++)
    {
      if ((N - c) % a == 0)
      {
        if (a * a == N - c)
        {
          ans++;
        }
        else
        {
          ans += 2;
        }
        cout << a << " " << (N - c) / a << " " << c << endl;
      }
    }
  }
  cout << ans << endl;
  return 0;
}