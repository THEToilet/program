#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  rep(i, 101)
  {
    if (A * i % B == C)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  if (A == 1)
  {
    cout << "YES" << endl;
    return 0;
  }
  cout << "NO" << endl;
  return 0;
}