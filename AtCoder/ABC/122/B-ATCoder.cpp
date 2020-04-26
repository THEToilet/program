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
    int tmp = 0;
    for (int j = i; j < S.size(); j++)
    {
      if ((S.at(j) == 'A') || (S.at(j) == 'C') || (S.at(j) == 'G') || (S.at(j) == 'T'))
      {
        tmp++;
       // cout << S.at(j) << endl;
      }
      else
      {
        break;
      }
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}