#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long long int N;
  cin >> N;
  long long ans = 1e18;
  for (long long int i = 1; i * i <= N; i++)
  {
    if (N % i != 0)
    {
      continue;
    }
    long long int j = N / i;
    ans = min(ans, i + j - 2);
  }
  cout << ans << endl;
  return 0;
}