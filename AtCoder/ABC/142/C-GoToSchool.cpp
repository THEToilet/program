#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  vector<int> ans(N);
  rep(i, N)
  {
    ans[A[i] - 1] = i + 1;
  }
  rep(i, N)
  {
    cout << ans[i] << endl;
  }
  return 0;
}