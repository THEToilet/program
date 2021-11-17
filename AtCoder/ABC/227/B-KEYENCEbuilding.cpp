#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> s(n);
  map<int, int> m;
  for (int i = 1; i < 310; i++)
  {
    for (int j = 1; j < 310; j++)
    {
      int t = ((4 * i * j) + (3 * i) + (3 * j));
      m[t]++;
    }
  }

  rep(i, n)
  {
    cin >> s.at(i);
  }
  int count = 0;
  rep(i, n)
  {
    if (m[s.at(i)] == 0)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}