#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, N)
  {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  if (d.size() % 2 != 0)
  {
    cout << 0 << endl;
    return 0;
  }
  else
  {
    cout << d[N / 2] - d[N / 2 - 1] << endl;
  }
  return 0;
}