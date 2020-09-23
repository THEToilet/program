#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  ll ans = (N - 2) / (K - 1) + 1;
  cout << ans << endl;
  return 0;
}