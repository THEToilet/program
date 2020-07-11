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
  rep(i, N)
  {
    if ((i + 1) % 2 == 1 && a[i] % 2 == 1)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}