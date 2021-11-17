#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> A(h, vector<ll>(w));
  rep(i, h)
  {
    rep(j, w)
    {
      cin >> A.at(i).at(j);
    }
  }
  bool ok = true;
  for (int i = 0; i < h; i++)
  {
    ll a = i;
    for (int j = i + 1; j < h; j++)
    {
      ll b = j;
      for (int k = 0; k < w; k++)
      {
        ll c = k;
        for (int l = k + 1; l < w; l++)
        {
          ll d = l;
          if ((A.at(a).at(c) + A.at(b).at(d)) <= (A.at(b).at(c) + A.at(a).at(d)))
          {
          }
          else
          {
            ok = false;
          }
        }
      }
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}