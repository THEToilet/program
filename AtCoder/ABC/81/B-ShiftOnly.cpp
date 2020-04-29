#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  int point = 0;
  while (1)
  {
    rep(i,N)
    {
      if (A[i] % 2 != 0)
      {
        cout << point << "\n";
        return 0;
      }
      A[i] = A[i] / 2;
    }
    point++;
  }
  return 0;
}