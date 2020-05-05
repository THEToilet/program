#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  int sum = 0;
  vector<ll> a(N);
  rep(i, N)
  {
    cin >> a[i];
    while (a[i] % 2 == 0)
    {
      a[i] /= 2;
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}