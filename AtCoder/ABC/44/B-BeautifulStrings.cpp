#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string w;
  cin >> w;
  map<char, int> mp;
  rep(i, w.size())
  {
    mp[w.at(i)]++;
  }
  for (auto m : mp)
  {
   // cout << m.first << " " << m.second << endl;
    if (m.second % 2 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}