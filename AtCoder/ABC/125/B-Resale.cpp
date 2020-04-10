#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> C(N), V(N);
  rep(i, N)
  {
    cin >> V[i];
  }
  rep(i, N)
  {
    cin >> C[i];
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    if (V[i] > C[i])
    {
      ans += V[i] - C[i];
    }
  }
  cout << ans << endl;
}