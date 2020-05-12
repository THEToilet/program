#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<ll> R(N);
  rep(i, N)
  {
    cin >> R[i];
  }
  ll maxv = -1 * 1e10;
  ll minv = 1e10;
  rep(i, N)
  {
    maxv = max(maxv, R[i] - minv);
    minv = min(minv, R[i]);
  }
  cout << maxv << endl;
  return 0;
}