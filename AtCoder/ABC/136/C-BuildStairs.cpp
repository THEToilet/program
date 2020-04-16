#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<long long int> H(N);
  rep(i, N)
  {
    cin >> H[i];
  }
  int pre = -100;
  rep(i, N)
  {
    if (pre <= H[i] - 1)
    {
      pre = H[i] - 1;
    }
    else if (pre <= H[i])
    {
      pre = H[i];
    }
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}