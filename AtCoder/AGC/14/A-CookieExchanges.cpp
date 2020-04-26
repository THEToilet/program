#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  vector<long int> A(3);
  cin >> A[0] >> A[1] >> A[2];
  long ans = 0;
  while (1)
  {
    if ((A[0] == 1) && (A[1] == 1) && (A[2] == 1))
    {
      cout << ans << endl;
      return 0;
    }
    if ((A[0] == A[1]) && (A[0] == A[2]))
    {
      cout << -1 << endl;
      return 0;
    }
    if ((A[0] % 2 != 0) || (A[1] % 2 != 0) || (A[2] % 2 != 0))
    {
      cout << ans << endl;
      return 0;
    }
    long int tmpA = A[0];
    long int tmpB = A[1];
    A[0] = (A[1] + A[2]) / 2;
    A[1] = (tmpA + A[2]) / 2;
    A[2] = (tmpA + tmpB) / 2;
    ans++;
  }

  return 0;
}