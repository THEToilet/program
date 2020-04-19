#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  vector<int> B = A;
  // 降順ソート
  sort(B.rbegin(), B.rend());
  rep(i, N)
  {
    int ans = B[0];
    if (B[0] == A[i])
    {
      ans = B[1];
    }
    cout << ans << endl;
  }
  return 0;
}