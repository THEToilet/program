#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<string> s(N);
  map<string, int> mp;
  rep(i, N)
  {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
    mp[s[i]]++;
  }
  long long int ans = 0;
  for (auto &p : mp)
  {
    int s = p.second;
    ans += (long long)s * (s - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}