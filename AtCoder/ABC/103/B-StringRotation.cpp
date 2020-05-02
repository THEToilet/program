#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S, T;
  cin >> S >> T;
  for (int i = 0; i < S.size(); ++i)
  {
    if (S == T)
    {
      cout << "Yes" << endl;
      return 0;
    }
    S = S.back() + S.substr(0, S.size() - 1);
  }
  cout << "No" << endl;
  return 0;
}