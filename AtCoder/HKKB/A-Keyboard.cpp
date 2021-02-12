#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  char S, T;
  cin >> S >> T;
  if (S == 'Y')
  {
    char ans = T - 32;
    cout << ans << endl;
  }
  else
  {
    cout << T << endl;
  }
  return 0;
}