#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll A, B, N;
  cin >> A >> B >> N;
  //cout << floor(1 / 100) << endl;
  for (int i = N; i > 0; i--)
  {
    cout << floor((A * N) / B) - A * floor(N / B) << endl;
  }
  return 0;
}