#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  int count = 0;
  bool ok = false;
  rep(i, N)
  {
    int a, b;
    cin >> a >>  b;
    if (a == b)
    {
      count++;
    }
    else
    {
      count = 0;
    }
    if (count >= 3)
    {
      ok = true;
    }
  }


  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}