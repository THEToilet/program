#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int K, N;
  cin >> K >> N;
  map<int, int> m;
  rep(i, N)
  {
    int tmp;
    cin >> tmp;
    m[tmp]++;
  }

  double ans = () / K;
  cout << ans << endl;
  return 0;
}
