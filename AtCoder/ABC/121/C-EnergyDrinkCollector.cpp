#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N);
  rep(i, N)
  {
    cin >> A[i] >> B[i];
  }
  //mapを使う方法
  //TreeMap -> 順番がソートされる
  //HashMap -> 順番がソートされない
  map<int, long long> m;

  for (int i = 0; i < N; i++)
  {
    //A円のお店にはB個追加されたよ
    if (m.count(A[i]))
      m[A[i]] += B[i];
    else
      m[A[i]] = B[i];
  }

  long long ans = 0;
  for (auto shop : m)
  {
    long long buy = min((long long)M, shop.second);
    ans += buy * shop.first;
    M -= (int)buy;
  }

  cout << ans << endl;
}