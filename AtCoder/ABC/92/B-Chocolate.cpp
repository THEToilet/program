#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, D, X;
  cin >> N >> D >> X;
  vector<int> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  int sum = 0;
  rep(i, N)
  {
    sum += 1 + abs((D - 1) / A[i]);
  }
  cout << X + sum << endl;
  return 0;
}