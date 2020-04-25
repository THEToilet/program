#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  int Alice = 0;
  int Bob = 0;
  sort(a.begin(), a.end(), greater<int>());
  int ret = 0;
  rep(i, N)
  {
    ret += a[i] * (i & 1 ? -1 : 1);
  }
  cout << ret << endl;

  return 0;
}