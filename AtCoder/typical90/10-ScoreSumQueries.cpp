#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> c1(N, 0);
  vector<int> c2(N, 0);
  rep(i, N)
  {
    int c, tmp;
    cin >> c >> tmp;
    if (c == 1)
    {
      if (i != 0)
      {
        c1.at(i) += c1.at(i - 1) + tmp;
        c2.at(i) += c2.at(i - 1);
      }
      else
      {
        c1.at(i) += tmp;
        c2.at(i) += 0;
      }
    }
    else
    {
      if (i != 0)
      {
        c1.at(i) += c1.at(i - 1);
        c2.at(i) += c2.at(i - 1) + tmp;
      }
      else
      {
        c1.at(i) += 0;
        c2.at(i) += tmp;
      }
    }
  }

  /*
  rep(i, N)
  {
    cout << "c1 " << c1.at(i) << " c2 " << c2.at(i) << endl;
  }
  */

  int Q;
  cin >> Q;
  vector<pair<int, int>> L(Q);
  rep(i, Q)
  {
    int l, r;
    cin >> l >> r;
    pair<int, int> t;

    if (l == 1)
    {
      t.first = c1.at(r - 1);
      t.second = c2.at(r - 1);
    }
    else
    {
      t.first = c1.at(r - 1) - c1.at(l - 2);
      t.second = c2.at(r - 1) - c2.at(l - 2);
    }
    L.at(i) = t;
  }
  rep(i, Q)
  {
    cout << L.at(i).first << " " << L.at(i).second << endl;
  }
  return 0;
}