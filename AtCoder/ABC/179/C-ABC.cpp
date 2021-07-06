#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  int ans = 0;
  for (int c = N; c > 0; c--)
  {
    for (int i = 1; i * i <= N - c; i++)
    {
      if ((N - c) % i == 0)
      {
        ans++;
        if ((N - c) / i != i)
        {
          ans++;
        }
      }
    }
    /*
    for (a = 1; a * a <= N - c; a++)
    {
      //cout << "a " << a << " a*a " << a * a << endl;
      int t = (N - c) % a;
      int b = (N - c) / a;
      if (t == 0 && b != 0)
      {
        if (b == a)
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
    */
  }
  cout << ans << endl;
  return 0;
}