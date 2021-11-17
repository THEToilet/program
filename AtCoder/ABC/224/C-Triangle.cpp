#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<ll> x(N), y(N);
  rep(i, N)
  {
    cin >> x.at(i) >> y.at(i);
  }
  int ans = 0;
  int cou = 0;
  int z = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        //ll n = (abs((x.at(i) - x.at(k) * (y.at(j) - y.at(k)) - (x.at(j) - x.at(k)) * (y.at(i) - y.at(k)))) / 2);
        ll m = ((x.at(i) * y.at(j) + x.at(j) * y.at(k) + x.at(k) * y.at(i) - y.at(i) * x.at(j) - y.at(j) * x.at(k) - y.at(k) * x.at(i)));
        if (m == 0)
        {
          z++;
        }
        cou++;
      }
    }
  }
  cout << cou - z << endl;
  return 0;
}