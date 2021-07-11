#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<int> b(w, 0);
  vector<int> c(h, 0);
  rep(i, h)
  {
    rep(j, w)
    {
      //scanf("%d", &(a.at(i).at(j)));
      cin >> a.at(i).at(j);
      b.at(j) += a.at(i).at(j);
      c.at(i) += a.at(i).at(j);
    }
  }
  rep(i, h)
  {
    rep(j, w)
    {
      //printf("%d ", b.at(j) + c.at(i) - a.at(i).at(j));
      cout << b.at(j) + c.at(i) - a.at(i).at(j) << + " ";
    }
    cout << endl;
  }
  return 0;
}