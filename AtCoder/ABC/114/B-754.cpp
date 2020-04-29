#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  int N = S.size();
  int ans = 999;
  for (int i = 0; i <= N - 3; i++)
  {
    int num = (S[i] - '0' /*文字=>数字*/) * 100 + (S[i + 1] - '0') * 10 + S[i + 2] - '0';
    ans = min(ans, abs(num - 753));
  }
  cout << ans << endl;
  return 0;
}