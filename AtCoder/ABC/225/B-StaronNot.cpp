#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<int, int> m;
  int count = 0;
  int a, b;
  rep(i, N - 1)
  {
    cin >> a >> b;
    m[a]++;
    m[b]++;
  }
  for (auto i = m.begin(); i != m.end(); ++i)
  {
    if (i->second == N - 1)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}