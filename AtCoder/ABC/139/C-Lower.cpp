#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<long long int> H(N);
  rep(i, N)
  {
    cin >> H[i];
  }
  reverse(H.begin(), H.end());
  int val = 0;
  int ans = 0;
  for (int i = 1; i < N; i++)
  {
    if (H[i - 1] <= H[i])
    {
      val++;
    }
    else
    {
      val = 0;
    }
    ans = max(ans, val);
  }
  cout << ans << endl;
}