#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int count = 0;
  int N, P, a;
  cin >> N >> P;
  rep(i, N)
  {
    cin >> a;
    if (a < P)
    {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}