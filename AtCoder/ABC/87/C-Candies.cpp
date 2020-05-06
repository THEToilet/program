#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<vector<int>> A(2, vector<int>(N));
  rep(i, 2)
  {
    rep(j, N)
    {
      cin >> A.at(i).at(j);
    }
  }
  int ans = 0;
  rep(i, N)
  {
    int tmp = 0;
    for (int k = 0; k <= i; k++)
    {
      tmp += A[0][k];
    }
    for (int j = i; j < N; j++)
    {
      tmp += A[1][j];
    }
    ans = max(tmp, ans);
  }
  cout << ans << endl;
  return 0;
}