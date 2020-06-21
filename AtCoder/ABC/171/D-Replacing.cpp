#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  string s = "";
  string tmp;
  rep(i, N)
  {
    cin >> tmp;
    s += tmp;
  }
  int Q;
  cin >> Q;
  rep(i, Q)
  {
    char B, C;
    cin >> B >> C;
    replace(s.begin(), s.end(), B, C);
    ll ans = 0;
    rep(j, N)
    {
      ans += s.at(j) -'0';
    }
    //cout << s << endl;
    cout << ans << endl;
  }
  return 0;
}