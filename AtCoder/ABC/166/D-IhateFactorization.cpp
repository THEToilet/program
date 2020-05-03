#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll X;
  cin >> X;
  /*
  ll b = (X % 2 == 0) ? 0 : -1;
  ll a = pow((X + (pow(b, 5))), (1 / 5.00));
  cout << a << " " << b << endl;*/
  for (int i = -1000; i <= 1000; i++)
  {
    for (int j = -1000; j <= 1000; j++)
    {
      if (pow(i, 5) - pow(j, 5) == X)
      {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  return 0;
}