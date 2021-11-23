#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()

{
  int n, k;
  cin >> n >> k;
  vector<vector<int>> p(n, vector<int>(3));
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n)
  {
    rep(j, 3)
    {
      cin >> p.at(i).at(j);
      a.at(i) += p.at(i).at(j);
    }
  }

  copy(a.begin(), a.end(), back_inserter(b));
  sort(b.begin(), b.end(), greater<int>());
  int judge = b.at(k - 1);

  rep(i, n)
  {
    if (a.at(i) + 300 >= judge)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}