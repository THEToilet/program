#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; } // 最大公約数

int main()
{
  ll x, y;
  cin >> x >> y;
  cout << gcd(x, y) << endl;
  return 0;
}