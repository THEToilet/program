#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> v(N);
  rep(i, N)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = v[0];
  for (int i = 1; i < N; i++)
  {
    ans = (ans + v[i]) / 2;
  }
  printf("%.10f\n", ans);
  return 0;
}