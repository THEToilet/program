#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int X;
  cin >> X;
  if (X == 0)
  {
    cout << "No" << endl;
    return 0;
  }
  if (X % 100 == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (X < 100)
  {
    cout << "No" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
  return 0;
}