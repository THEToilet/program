#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  rep(i, 5)
  {
    int x;
    cin >> x;
    if (x == 0)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}