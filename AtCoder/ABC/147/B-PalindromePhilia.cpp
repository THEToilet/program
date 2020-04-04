#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  cin >> S;
  int ans = 0;
  int N = S.size();
  for (int i = 0; i < N; i++)
  {
    if (S.at(i) != S.at(N - 1 - i))
    {
      ans++;
    }
  }
  cout << ans/2 << endl;
}