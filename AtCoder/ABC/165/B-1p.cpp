#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll X;
  cin >> X;
  ll moto = 100LL;
  for (int i = 0;; i++)
  {
    if (moto >= X)
    {
      cout << i << endl;
      return 0;
    }
    moto += floor(moto * 0.01);
  }
  return 0;
}