#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  double ret = 0;
  for (int i = 1; i <= N; i++)
  {
    double tmp = 1.0 / N;
    int now = i;
    while (now < K)
    {
      now *= 2; // ポイント二倍
      tmp /= 2; // コイン表の確率
    }
    ret += tmp;
  }
  printf("%.12f\n", ret);

  return 0;
}