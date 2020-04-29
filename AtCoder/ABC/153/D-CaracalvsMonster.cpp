#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
ll f(ll h)
{
  if (h == 1)
  {
    return 1;
  }
  else
  {
    return 2 * f(h / 2) + 1;
  }
}

int main()
{
  ll H;
  cin >> H;
  cout << f(H) << endl;
  return 0;
}