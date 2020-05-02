#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll A, B, N;
  cin >> A >> B >> N;
  //cout << floor(1 / 100) << endl;
  if (N == 1)
  {
    cout << floor((A * 1) / B) << endl;
    return 0;
  }
  else if (A <= B)
  {
    cout << floor((A * (N - 1)) / B) - A * floor((N - 1) / B) << endl;
    return 0;
  }
  else
  {
    cout << floor((A * N) / B) - A * floor(N / B) << endl;
    return 0;
  }
  return 0;
}