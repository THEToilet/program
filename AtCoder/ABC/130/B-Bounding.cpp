#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> L;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    L.push_back(a);
  }
  int D = 0;
  int ans = 1;
  for (int i = 0; i < N; i++)
  {
    D = D + L.at(i);
    if (X >= D)
    {
      ans++;
    }
  }
  cout << ans << endl;
}