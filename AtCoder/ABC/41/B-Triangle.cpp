#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
const int MOD = 1000000007;
using namespace std;
int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  cout << a * b % MOD * c % MOD << endl;

  return 0;
}