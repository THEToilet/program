#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> X(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> X[i];
  }
  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    int tmp = min(X[i], K - X[i]);
    ans += tmp;
  }
  cout << ans * 2 << endl;
  return 0;
}