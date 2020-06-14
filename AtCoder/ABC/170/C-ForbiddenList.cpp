#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int X, N;
  cin >> X >> N;
  map<int, int> p;

  rep(i, N)
  {
    int a;
    cin >> a;
    p[a]++;
  }

//  map<int, int> oo;
  ll mini = 1e9;
  int ans = 100000;
  for (int i = 0; i <= 1000; i++)
  {
    if (p[i] == 0 && mini >= abs(X - i))
    {
      mini = abs(X - i);
      ans = i;
    }
  }

  return 0;
}