#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n, 0);
  vector<ll> x(q, 0);
  ll max = 0;
  rep(i, n)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  rep(i, q)
  {
    cin >> x[i];
  }
  rep(i, q)
  {
    auto itr = lower_bound(a.begin(), a.end(), x[i]);
    if (itr == a.end())
    {
      cout << 0 << endl;
    }
    else
    {
      //cout << *itr << endl;
      //cout << "distance" << endl;
      //cout << distance(a.begin(), itr) << endl;
      //cout << "ans" << endl;
      cout << n - distance(a.begin(), itr) << endl;
    }
  }
  return 0;
}