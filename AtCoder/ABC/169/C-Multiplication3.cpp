#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll A;
  double B;
  cin >> A >> B;
  // (A × (B × 100))/100
  ll ans = (B * 100 + 0.5); // ここで整数に変換
  ans = A * ans / 100;
  cout << ans << endl;

  return 0;
}