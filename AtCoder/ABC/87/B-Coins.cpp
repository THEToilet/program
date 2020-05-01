#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int count = 0;
  rep(i, A + 1)
  {
    rep(j, B + 1)
    {
      rep(k, C + 1)
      {
        if (500 * i + 100 * j + 50 * k == X)
        {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}