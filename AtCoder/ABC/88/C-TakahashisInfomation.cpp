#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  vector<vector<int>> c(3, vector<int>(3));
  rep(i, 3)
  {
    rep(j, 3)
    {
      cin >> c.at(i).at(j);
    }
  }
  vector<int> a(3), b(3);
  // a1 = 0
  a[0] = 0;
  b[0] = c.at(0).at(0) - a[0];
  b[1] = c.at(0).at(1) - a[0];
  b[2] = c.at(0).at(2) - a[0];
  a[1] = c.at(1).at(0) - b[0];
  a[2] = c.at(2).at(0) - b[0];
  rep(i, 3)
  {
    rep(j, 3)
    {
      if (c.at(i).at(j) != a[i] + b[j])
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}