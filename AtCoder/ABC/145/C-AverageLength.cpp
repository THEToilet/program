#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int facctorialMethod(int k)
{
  int sum = 1;
  for (int i = 1; i <= k; ++i)
  {
    sum *= i;
  }
  return sum;
}

int main()
{
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  vector<int> P(N);
  rep(i, N)
  {
    cin >> x[i] >> y[i];
    P[i] = i;
  }
  double ans;
  do
  {
    rep(i, N - 1)
    {
      ans += pow(pow((x[P[i]] - x[P[i + 1]]), 2) + pow((y[P[i]] - y[P[i + 1]]), 2), (1.0 / 2.0));
     // cout << ans << endl;
    }
  } while (next_permutation(P.begin(), P.end()));

  //cout << ans / facctorialMethod(N) << endl;
  printf("%.12lf",ans / facctorialMethod(N));
}
