#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  cin >> S;
  bool a[26];
  rep(i, 26)
  {
    a[i] = false;
  }
  rep(i, S.size())
  {
    a[S.at(i) - 'a'] = true;
  }
  rep(i, 26)
  {
    if (!a[i])
    {
      char tmp = i + 'a';
      cout << tmp << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}