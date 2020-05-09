#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; a[i] != 2;)
  {
    i = a[i] - 1;
    ans++;
    if (ans > N)
    {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans + 1 << endl;
  return 0;
}