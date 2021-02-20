#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<double> q(N);
  vector<double> s(N);
  rep(i, N)
  {
    int tmp;
    cin >> tmp;
    //q[i] = ((tmp * (tmp + 1)) / 2) / tmp;
    q[i] = ((tmp + 1)) / 2.0;
    cout << q[i] << endl;
  }
  rep(i, N)
  {
    if (i == 0)
    {
      s[i] += q[i];
    }
    else
    {
      s[i] += s[i - 1] + q[i];
    }
    cout << s[i] << endl;
  }
  double ans = 0;
  rep(i, N)
  {
    if (K - 1 == 0)
    {
      ans = max(ans, s[0]);
    }
    if ((i + K < N))
    {
      ans = max(ans, s[i + K] - s[i]);
      cout << i + K - 1 << "==" << i << endl;
    }
  }
  //cout << ans << endl;
  printf("%.12lf\n", ans);
  return 0;
}
