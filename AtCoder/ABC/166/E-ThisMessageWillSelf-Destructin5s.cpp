#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  int ans = 0;
  rep(i, N)
  {
    cin >> A[i];
  }
  rep(i, N)
  {
    for (int j = (i == N - 1) ? 0 : i + 1; i < N; i++)
    {
      if ((A[i] + A[j]) / 2 == abs(i - j))
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}