#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  A.push_back(A[0] + K);
  int l = 0;
  rep(i, N)
  {
    l = max(l, A[i + 1] - A[i]);
  }
  int ans = K - l;
  cout << ans << endl;
}