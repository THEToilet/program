#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> T(N);
  int sum = 0;
  rep(i, N)
  {
    cin >> T[i];
    sum += T[i];
  }
  int M;
  cin >> M;
  vector<int> P(M), X(M);
  rep(i, M)
  {
    cin >> P[i] >> X[i];
  }
  rep(i, M)
  {
    cout << sum - (T[P[i] - 1] - X[i]) << endl;
  }

  return 0;
}