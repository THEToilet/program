#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int X, Y;
  cin >> X >> Y;
  for (int i = 0; i <= X; i++)
  {
    if (2 * i + 4 * (X - i) == Y)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}