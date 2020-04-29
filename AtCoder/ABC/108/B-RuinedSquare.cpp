#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = c - a, y = d - b;
  printf("%d %d %d %d\n ", c - y, d + x, a - y, b + x);

  return 0;
}