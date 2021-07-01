#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> t(N);
  rep(i, N)
  {
    cin >> t.at(i);
  }
  rep(i, N)
  {
    if (i == N - 2)
    {
      break;
    }
    int sum = t.at(i) + t.at(i + 1) + t.at(i + 2);
    //cout << i << " " << sum << endl;
    if (sum < K)
    {
      cout << i + 3 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}