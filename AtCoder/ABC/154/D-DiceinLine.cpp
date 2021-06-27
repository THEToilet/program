#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<double> q(N);
  vector<double> s(N + 1);
  rep(i, N)
  {
    int tmp;
    cin >> tmp;
    //q[i] = ((tmp * (tmp + 1)) / 2) / tmp;
    q[i] = ((tmp + 1)) / 2.0;
    cout << q[i] << endl;
  }
  s[0] = 0;
  for (int i = 1; i < N + 1; i++)
  {
    s[i] += s[i - 1] + q[i - 1];
    cout << s[i] << endl;
  }
  double ans = 0;
  for (int i = 1; i < N + 1; i++)
  {
    if (i + K > N + 1)
      break;
    ans = max(ans, s[i + K] - s[i - 1]);
    cout << i + K << "==" << i << " : " << s[i + K] - s[i - 1] << "   " << s[i + K] << " : " << s[i - 1] << endl;
  }
  //cout << ans << endl;
  printf("%.12lf\n", ans);
  return 0;
}
