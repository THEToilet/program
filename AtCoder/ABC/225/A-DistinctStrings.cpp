#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  if (s.at(0) == s.at(1) && s.at(0) == s.at(2))
  {
    cout << 1 << endl;
    return 0;
  }
  else if (s.at(0) != s.at(1) && s.at(0) != s.at(2) && s.at(1) != s.at(2))
  {
    cout << 6 << endl;
    return 0;
  }
  else
  {
    cout << 3 << endl;
    return 0;
  }

  return 0;
}