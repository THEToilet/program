#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll N, M;
  cin >> N >> M;
  vector<vector<ll>> b(N, vector<ll>(M));
  rep(i, N)
  {
    rep(j, M)
    {
      cin >> b.at(i).at(j);
    }
  }
  rep(i, N)
  {
    rep(j, M)
    {
      ll tmp = b.at(i).at(j);
      if (b.at(i).at(M - 1) > (b.at(i).at(0) / 7 + 1) * 7)
      {
        cout << "No" << endl;
        return 0;
      }
      if (i == 0 && j == 0)
      {
        continue;
      }
      else if (j == 0)
      {
        if ((b.at(i - 1).at(j) + 7) != tmp)
        {
          cout << "No" << endl;
          return 0;
        }
      }
      else if (i == 0)
      {
        if ((b.at(i).at(j - 1) + 1) != tmp)
        {
          cout << "No" << endl;
          return 0;
        }
      }
      else if ((b.at(i).at(j - 1) + 1) != tmp || (b.at(i - 1).at(j) + 7) != tmp)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}