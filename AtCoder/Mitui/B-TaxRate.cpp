#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  double N;
  cin >> N;
  rep(i, 50000 + 1)
  {
    if (floor(i * 1.08) == N)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}