#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  map<string, int> member;
  int n;
  cin >> n;
  rep(i, n)
  {
    string s;
    cin >> s;
    member[s]++;
  }
  int count = 0;
  string v = "";
  for (auto i = member.begin(); i != member.end(); ++i)
  {
    if (i->second > count)
    {
      count = i->second;
      v = i->first;
    }
  }
  cout << v << endl;
  return 0;
}