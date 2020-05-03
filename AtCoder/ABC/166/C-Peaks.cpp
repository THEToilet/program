#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<ll> H(N);
  vector<ll> n(N, 0);
  rep(i, N)
  {
    cin >> H[i];
  }
  vector<int> A(M), B(M);
  rep(i, M)
  {
    cin >> A[i] >> B[i];
    n[A[i] - 1] = max(n[A[i] - 1], H[B[i] - 1]);
    n[B[i] - 1] = max(n[B[i] - 1], H[A[i] - 1]);
  }
  int ans = 0;
  rep(i, N)
  {
    if (n[i] == 0)
    {
      // cout << "sita" << i << endl;
      ans++;
    }
    else if (H[i] > n[i])
    {
      ans++;
      //cout << "ue" << i << endl;
      //  cout << i << endl;
    }
  }
  cout << ans << endl;

  return 0;
}