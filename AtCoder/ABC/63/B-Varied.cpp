#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  map<char, int> m;
  rep(i, S.size())
  {
    m[S.at(i)]++;
  }
  for (auto a : m)
  {
   // cout << a.first << a.second << endl;
    if (a.second != 1)
    {
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
  return 0;
}