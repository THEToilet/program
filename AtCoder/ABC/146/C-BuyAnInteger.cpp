#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long int A, B, X;
  cin >> A >> B >> X;
  long long l = 0, r = 1e9 + 1;
  // ラムダ関数
  auto keta = [&](long long c) {
    int res = 0;
    while (c)
    {
      c /= 10;
      res++;
    }
    return res;
  };
  auto f = [&](long long c) {
    return A * c + B * keta(c);
  };
  // 二分探査(差が1になるまで)
  while (r - l > 1)
  {
    long long center = (l + r) / 2;
    if (f(center) <= X)
      l = center;
    else
    {
      r = center;
    }
  }
  cout << l << endl;
  return 0;
}