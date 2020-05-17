#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int K;
  cin >> K;
  string S;
  cin >> S;
  if (S.size() <= K)
  {
    cout << S << endl;
  }
  else
  {
    cout << S.substr(0, K) + "..." << endl;
  }
  return 0;
}