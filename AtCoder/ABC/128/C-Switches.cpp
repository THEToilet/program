#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  rep(i, M)
  {
    int k;
    cin >> k;
    rep(j, k)
    {
      int s;
      cin >> s;
      s--;
      a[s] |= 1 << i; // | := or (ex) i = 2, s = 1 , a[1] = 000 , 1<<2 = 100
      // 繋がっているスイッチの番号
    }
  }
  int ans = 0;
  int p = 0;
  rep(i, M)
  {
    int x;
    cin >> x;
    p |= x << i;  // pの入力例 1 0 1  p=101
  }
  for (int l = 0; l < (1 << N) /* := 2^N スイッチon off状態全通り*/; l++)
  {
    int t = 0;
    rep(i, N)
    {
      if (l >> i & 1) // l = 110(6), i=2  110>>2  => 1&(AND(*))1 = 1
      {
        t ^= a[i]; // t xor a[i] ここでスイッチのつけ消し
      }
    }
    if (t == p)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}