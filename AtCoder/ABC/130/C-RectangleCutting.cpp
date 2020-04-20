#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll W, H, x, y;
  cin >> W >> H >> x >> y;
  printf("%lf %d\n", double(W) * double(H) / 2, x + x == W && y + y == H);

  return 0;
}