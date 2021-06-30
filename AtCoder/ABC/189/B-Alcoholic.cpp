#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
// 除算しないところがポイント
int main()
{

  int N, X;
  cin >> N >> X;
  int sum = 0;
  vector<int> V(N);
  vector<int> P(N);
  rep(i, N)
  {
    cin >> V.at(i) >> P.at(i);
  }
  rep(i, N)
  {
    sum += (V.at(i) * P.at(i));
    if (sum > X * 100)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}