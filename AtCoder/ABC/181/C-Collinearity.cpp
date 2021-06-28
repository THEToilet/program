#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep(i, N)
  {
    cin >> x.at(i) >> y.at(i);
  }
  rep(i, N)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = 0; k < N; k++)
      {
        if (i != k && j != k)
        {
          //cout << "debug: " << ((y.at(i) - y.at(j)) * y.at(k)) << " " << ((x.at(i) - x.at(j)) * x.at(k)) << endl;
        　// 2点を結ぶ直線の式
          if (((y.at(k) - y.at(i)) * (x.at(j) - x.at(i))) == ((y.at(j) - y.at(i)) * (x.at(k) - x.at(i))))
          {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}