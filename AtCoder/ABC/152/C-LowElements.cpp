#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i, N)
  {
    cin >> P[i];
  }
  int ans = 0;
  int curMin = 1e9; // 10の9乗
  rep(i, N)
  {
    curMin = min(curMin, P[i]);
    if (curMin == P[i]) // 最小値は自分でなければならない
    {
      ans++;
    }
  }
  cout << ans << endl;
}