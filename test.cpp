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
      cout << i << " " << j << " " << i * 5 + j << endl;
    }
  }
  vector<int> s(3);
  s[0] = 0;
  s[1] = 1;
  s[2] = 2;
  int z = 0;
  int y = s[z++];
  cout << z << endl;
  cout << y << endl;
  return 0;
}