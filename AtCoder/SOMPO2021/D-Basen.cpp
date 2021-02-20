#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string X;
  ll M;
  cin >> X >> M;
  string temp = X;
  sort(temp.begin(), temp.end(), greater<char>{});
  char max = temp.at(0);
  //cout << "max : " << max << endl;
  ll cnt = 0;
  bool ok = true;
  for (ll c = (max - '0') + 1;; c++)
  {
    ll num = 0;
    for (ll i = 0; i < X.size(); i++)
    {
      num += (ll)(X.at(i) - '0') * pow(c, X.size() - (i + 1));
      cout << "c : " << X.at(i) - '0' << " num : " << pow(c, i) << "X" << X << endl;
      cout << "c : " << c << " num : " << num << endl;
      //cout << "num : " << to_string(num) << " M : " << to_string(M) << endl;
      if (num > M)
      {
        ok = false;
        break;
      }
    }
    if (!ok)
    {
      break;
    }
    cnt++;
    //cout << num << endl;
    break;
  }
  cout << cnt << endl;
  return 0;
}