#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  int r = 0, b = 0;
  rep(i, S.size())
  {
    (S.at(i) == '0') ? ++r : ++b;
  }
  int ans = min(r, b);
  cout << ans * 2 << endl;
  return 0;
}