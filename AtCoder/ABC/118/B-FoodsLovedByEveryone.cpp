#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> cnt(M, 0);
  for (int i = 0; i < N; ++i)
  {
    int K;
    cin >> K;
    for (int j = 0; j < K; ++j)
    {
      int A;
      cin >> A;
      --A;
      ++cnt[A];
    }
  }
  int ans = 0;
  for (int i = 0; i < M; ++i)
  {
    if (cnt[i] == N)
    {
      ++ans;
    }
  }
  cout << ans << endl;
}
