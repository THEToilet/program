#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> s(M);
  vector<int> c(M);
  char ans[3];
  rep(i, 3) ans[i] = -1;
  rep(i, M)
  {
    cin >> s[i] >> c[i];
  }
  rep(i, M)
  {
    ans[s[i] - 1] = c[i];
  }
}