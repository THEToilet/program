#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string O, E;
  cin >> O >> E;
  rep(i, O.size())
  {
    cout << O.at(i);
    if (i < E.size())
    {
      cout << E.at(i);
    }
  }
  cout << endl;
  return 0;
}