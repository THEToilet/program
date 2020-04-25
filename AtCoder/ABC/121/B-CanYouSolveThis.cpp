#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int>> A(N, vector<int>(M));
  rep(i, M)
  {
    cin >> B[i];
  }
  rep(i, N)
  {
    rep(j, M)
    {
      cin >> A[i][j];
      //printf("%d:%d = %d\n", i, j, A[i][j]);
    }
  }
  int ans = 0;
  rep(i, N)
  {
    int tmp = 0;
    rep(j, M)
    {
      tmp += B[j] * A[i][j];
    }
    if (tmp + C > 0)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}