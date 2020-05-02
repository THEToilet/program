#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll L[87];
  ll N;
  cin >> N;
  L[0] = 2LL;
  L[1] = 1LL;
  for (int i = 2; i <= N; i++)
  {
    L[i] = L[i - 1] + L[i - 2];
  }
  cout << L[N] << endl;
  return 0;
}