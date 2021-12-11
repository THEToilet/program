#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    mp[a]++;
    mp[b]++;
  }
  bool is = true;
  for (auto i = mp.begin(); i != mp.end(); i++)
  {
    if (i->second > 2)
    {
      is = false;
    }
  }
  if (is)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}