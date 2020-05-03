#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{ // floor(a/b) = (a-a%b)/b
  ll A, B, N;
  cin >> A >> B >> N;
  ll x = N;
  if(N >= B-1){
    x = B-1;
  }
  ll ans = A*(x%B)/B;
  cout << ans << endl;
  return 0;
}