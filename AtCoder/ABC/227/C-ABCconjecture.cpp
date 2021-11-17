#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll n;
  ll count = 0;
  cin >> n;
  for (ll i = 1; i < n; i++)
  {
    for (ll j = 1; j < n; j++)
    {
      if (i > j || i * j > n)
      {
        break;
      }
      for (ll k = 1; k < n; k++)
      {
        if (j > k || i * j * k > n)
        {
          break;
        }
        else
        {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}