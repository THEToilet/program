#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll N;
  cin >> N;
  ll K = N % 26;
  string ans;
  ll count = 0;
  do
  {
    ans += char(K + 96);
    N = (N-26) / 26;
    K = N % 26;
    count++;
  } while (N != 0);

  reverse(ans.begin(),ans.end());
  cout << ans << endl;
  return 0;
}