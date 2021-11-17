#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  int N = s.size();
  vector<char> ss(N);
  rep(i, N)
  {
    ss.at(i) = s.at(i);
  }

  vector<string> sss(N);
  string tm = s;
  rep(i, N)
  {
    string tmp = "";
    rep(j, N)
    {
      if (j == N - 1)
      {
        tmp += tm.at(0);
      }
      else
      {
        tmp += tm.at(j + 1);
      }
    }
    sss.at(i) = tmp;
    tm = tmp;
  }

  sort(sss.begin(), sss.end());

  cout << sss.at(0) << endl;
  cout << sss.at(N - 1) << endl;
  return 0;
}