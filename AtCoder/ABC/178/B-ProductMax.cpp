#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll m;
  m = max(a * c, max(b * d, max(a * d, b * c)));
  cout << m << endl;
  return 0;
}