#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> p(N);
  rep(i, N)
  {
    cin >> p.at(i);
  }
  set<int> s;
  int ans = 0;
  rep(i, N)
  {
    s.insert(p.at(i));
    while (s.count(ans) != 0)
    {
      ans++;
    }
    cout << ans << endl;
  }

  return 0;
}