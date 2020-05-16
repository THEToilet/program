#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<int, int> m{};
  int M;
  rep(i, N)
  {
    int a;
    cin >> a;
    M = max(a, M);
    m[a]++;
  }
  int ans = 0;
  rep(i, M + 1)
  {
    int tmp = m[i] + m[i - 1] + m[i + 1];
    ans = max(tmp, ans);
  }
  cout << ans << endl;
  return 0;
}