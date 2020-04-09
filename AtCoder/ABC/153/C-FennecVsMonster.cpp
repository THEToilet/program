#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  vector<long int> H(N);
  rep(i, N)
  {
    long int a;
    cin >> a;
    H[i] = -a;
  }
  sort(H.begin(), H.end());
  long long int sum = 0;
  for (int i = K; i < N; i++)
  {
    sum += -1 * H[i];
  }
  cout << sum << endl;
}