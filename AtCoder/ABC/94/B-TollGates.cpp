#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  rep(i, M)
  {
    cin >> A[i];
  }
  int ans = 0;
  int rcount = 0;
  int lcount = 0;
  for (int i = 0; i < M; i++)
  {
    if (A[i] < X)
    {
      ++lcount;
    }
    else
    {
      ++rcount;
    }
  }
  ans = min(rcount, lcount);
  cout << ans << endl;
  return 0;
}