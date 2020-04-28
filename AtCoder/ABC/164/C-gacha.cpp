#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<string, int> mp;
  rep(i, N)
  {
    string s;
    cin >> s;
    mp[s]++;
  }
  cout << mp.size() << endl;
  return 0;
}