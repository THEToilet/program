#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int a[4];
int main()
{
  string S;
  cin >> S;
  int sum = 0;
  rep(i, S.size())
  {
    a[i] = S.at(i) - '0';
  }
  rep(x, 8)
  {
    int sum = a[0];
    string s;
    s += (char)('0' + a[0]);
    rep(i, 3)
    {
      if (x & (1 << i))
      {
        sum += a[i + 1];
        s += '+';
        s += (char)('0' + a[i + 1]);
      }
      else
      {
        sum -= a[i + 1];
        s += '-';
        s += (char)('0' + a[i + 1]);
      }
    }
    if (sum == 7)
    {
      cout << s << "=7" << endl;
      return 0;
    }
  }
  return 0;
}