#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll A, B, C, K;
  cin >> A >> B >> C >> K;
  if (A + B < K)
  {
    cout << A - 1 * (K - (A + B)) << endl;
  }
  else
  {
    cout << min(A, K) << endl;
  }
  return 0;
}