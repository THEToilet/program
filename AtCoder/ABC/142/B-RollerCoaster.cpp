#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K;
  int ans = 0;
  cin >> N >> K;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    if (a >= K)
    {
      ans++;
    }
  }
  cout << ans << endl;
}