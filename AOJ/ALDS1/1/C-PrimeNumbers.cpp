#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
bool is_prime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return n != 1;
}
int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  int ans = 0;
  rep(i, N)
  {
    if (is_prime(a[i]))
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}