#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m), c(m), d(m);
  bool ans = true;
  rep(i, m)
  {
    cin >> a[i] >> b[i];
  }
  rep(i, m)
  {
    cin >> c[i] >> d[i];
  }

  vector<int> v(n);
  rep(i, n)
  {
    v[i] = i + 1;
  }
  sort(v.begin(), v.end());
  do
  {
    int count = 0;
    rep(i, m)
    {
      bool tmptmp = false;
      int tmpa = v[a[i] - 1];
      int tmpb = v[b[i] - 1];
      rep(j, m)
      {
        if (tmpa == c[j] && tmpb == d[j])
        {
          tmptmp = true;
          break;
        }
        else if (tmpa == d[j] && tmpb == c[j])
        {
          tmptmp = true;
          break;
        }
        else
        {
          tmptmp = false;
        }
      }
      if (tmptmp)
      {
        count++;
      }
    }
    if (count == m)
    {
      ans = true;
      break;
    }
    else
    {
      ans = false;
    }

  } while (next_permutation(v.begin(), v.end()));

  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}