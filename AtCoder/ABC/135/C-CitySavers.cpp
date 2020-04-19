#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<long long int> A(N + 1);
  vector<long long int> B(N);
  rep(i, N + 1)
  {
    cin >> A[i];
  }
  rep(i, N)
  {
    cin >> B[i];
  }

  //Aそれぞれが10^9までなので
  //これのsumはintに収まらないことに注意！
  long ans = 0;
  for (int i = 0; i < N; i++)
  {
    //まずは左を全力で倒す
    int left = min(A[i], B[i]);
    ans += left;
    A[i] -= left;
    B[i] -= left;

    //残った戦力で右を全力で倒す
    int right = min(A[i + 1], B[i]);
    ans += right;
    A[i + 1] -= right;
    B[i] -= right;
  }

  cout << ans << endl;
}