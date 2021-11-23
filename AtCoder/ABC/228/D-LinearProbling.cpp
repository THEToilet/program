#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int q;
  cin >> q;
  vector<int> t(q);
  vector<ll> x(q);
  map<ll, pair<ll, ll>> m;
  ll n = 1048576;
  rep(i, q)
  {
    cin >> t.at(i) >> x.at(i);
  }

  rep(i, q)
  {
    if (t.at(i) == 1)
    {
      ll h = x.at(i);
      ll tmp = m[h % n].second;
      if (tmp == 0)
      {
        tmp = -1;
      }
      else
      {
        tmp = m[h % n].first;
      }
      if (tmp == -1)
      {
        continue;
      }
      auto begin = m.begin(), end = m.end();
      for (auto iter = begin; iter != end; iter++)
      {
        pair<ll, ll> tt = iter->second;
        if (tt.second != 0 && tt.second > h)
        {
          m[iter->first].first = x.at(i);
          m[iter->first].second++;
          break;
        }
      }
    }
    else if (t.at(i) == 2)
    {
      ll tmp = m[x.at(i) % n].second;
      if (tmp == 0)
      {
        tmp = -1;
      }
      else
      {
        tmp = m[x.at(i) % n].first;
      }
      cout << tmp << endl;
    }
  }
  return 0;
}