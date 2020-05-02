#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<string> W(N);
  rep(i, N)
  {
    cin >> W[i];
  }
  map<string, int> m;
  rep(i, N)
  {
    m[W[i]]++;
    //cout << m[W[i]] << endl;
    if (m[W[i]] != 1)
    {
      cout << "No" << endl;
      return 0;
    }
    if (i != 0 && (W[i].at(0) != W[i - 1].at(W[i - 1].size() - 1)))
    {
      //  cout << W[i].at(0) << W[i - 1].at(W[i - 1].size() - 1) << endl;
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}