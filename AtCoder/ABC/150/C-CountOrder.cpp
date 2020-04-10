#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> P(n), Q(n);
  for (int i = 0; i < n; i++)
    cin >> P[i];
  for (int i = 0; i < n; i++)
    cin >> Q[i];
  vector<int> A(n);
  for (int i = 0; i < n; i++)
    A[i] = i + 1;
  map<vector<int>, int> mp;
  do
  {
    mp[A] = mp.size();
  } while (next_permutation(A.begin(), A.end())); // 順列生成
  int ans = abs(mp[P] - mp[Q]);
  cout << ans << endl;
  return 0;
}