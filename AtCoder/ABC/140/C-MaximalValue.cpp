#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> B(N - 1);
  rep(i, N - 1)
  {
    cin >> B[i];
  }
  vector<int> A(N, 1e12); // infで初期化
  rep(i, N - 1)
  {
    A[i] = min(A[i], B[i]);
    A[i + 1] = min(A[i + 1], B[i]);
  }

  int ans = 0;
  rep(i, N)
  {
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}