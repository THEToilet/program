#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> a(M), b(M);
  vector<int> c(N);
  rep(i, M)
  {
    cin >> a[i] >> b[i];
    c[a[i]-1]++;
    c[b[i]-1]++;
  }
  rep(i, N)
  {
    cout << c[i] << endl;
  }

  return 0;
}