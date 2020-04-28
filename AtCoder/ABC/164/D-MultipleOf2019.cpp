#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  int ans = 0;
  rep(i, S.size())
  {
    for (int j = i + 4; j <= S.size(); j++)
    {
      string tmp = S.substr(i, j);
      //cout << tmp << endl;
      //printf("%d,%d\n", i, j);
      ll tmpi = atoi(tmp.c_str());
      if (tmpi % 2019 == 0)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}