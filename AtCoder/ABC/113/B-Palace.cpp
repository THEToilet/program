#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, T, A;
  cin >> N >> T >> A;
  int res = 0;
  int cc = 1 << 30;
  for (int i = 1; i <= N; i++)
  {
    int X;
    cin >> X;
    int d = abs((T * 1000 - X * 6) - A * 1000);
    if (cc > d)
    {
      cc = d, res = i;
    }
  }
  cout << res << endl;

  return 0;
}