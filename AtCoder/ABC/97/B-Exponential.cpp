#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int X;
  cin >> X;
  vector<bool> expo(X + 1);
  expo[1] = 1;
  for (int b = 2; b <= X; b++)
  {
    int v = b * b;
    while (v <= X)
    {
      expo[v] = 1;
      v *= b;
    }
  }
  for (int i = X; i >= 1; i--)
    if (expo[i])
    {
      cout << i << endl;
      return 0;
    }
  return 0;
}