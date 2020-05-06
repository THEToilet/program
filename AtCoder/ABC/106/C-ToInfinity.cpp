#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string S;
  ll K;
  cin >> S >> K;
  for (int i = 0; i < min((long long)S.size(), K); i++)
  {
    if (S[i] >= '2')
    {
      cout << S[i] << endl;
      return 0;
    }
  }
  cout << '1' << endl;
  return 0;
}