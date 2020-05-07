#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
long long N, A[1 << 18]; // 262144
int main()
{
  cin >> N;
  long long S = 0;
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
    S += A[i];
  }

  long long minx = S, sum = 0;
  for (int i = 1; i <= N; i++)
  {
    sum += A[i];
    minx = min(minx, abs(sum - (S - sum)));  // 累積和
  }
  cout << minx << endl;
  return 0;
}