#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll T;
  cin >> T;
  ll N, A, B;
  rep(i, T)
  {
    cin >> N >> A >> B;
    ll red = (N * N) / A * A;
    cout << red << endl;
    ll blue = (N * N) / B * B;
    cout << blue << endl;
    ll two = (A > B) ? (A * A) / B * B : (B * B) / A * A;
    cout << two << endl;
    cout << ((A > B) ? blue : red) << endl;
    cout << red * blue - two * ((red > blue) ? blue : red) << endl;
  }
  return 0;
}