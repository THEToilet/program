#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  ll b = A[0];
  bool inc = false;
  bool dec = false;
  int ans = 0;
  rep(i, N)
  {
    if (b >= A[i])
    {
      dec = true;
    }
    else
    {
      inc = true;
    }
    b = A[i];
    ans++;
  }
  return 0;
}