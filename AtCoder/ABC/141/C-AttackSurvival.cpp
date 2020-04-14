#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long long int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(Q);
  rep(i, Q)
  {
    cin >> A[i];
  }
  vector<int> M(N);
  rep(i, N)
  {
    M[i] = K-Q;
  }
  rep(i, Q)
  {
    M[A[i] - 1] += 1;
  }
  rep(i, N)
  {
   // cout << M[i] << endl;
    if (M[i] > 0)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  return 0;
}