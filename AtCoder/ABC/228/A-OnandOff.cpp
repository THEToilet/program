#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int s, t, x;
  cin >> s >> t >> x;
  while (s != t)
  {
    if (s == x && t != x)
    {
      cout << "Yes" << endl;
      return 0;
    }
    int tmp = s;
    if ((tmp + 1) == 24)
    {
      s = 0;
    }
    else
    {
      s++;
    }
  }
  cout << "No" << endl;
  return 0;
}