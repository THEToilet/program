#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  rep(i, 5)
  {
    rep(j, 5)
    {
      cout << i << " " << j << " " <<  i * 5 + j << endl;
    }
  }
  return 0;
}