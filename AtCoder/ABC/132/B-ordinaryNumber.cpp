#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  vector<int> p;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    p.push_back(a);
  }
  int ans = 0;
  for (int i = 0; i < n - 2; i++)
  {
    if ((p[i] > p[i + 1] && p[i + 1] > p[i + 2]) || (p[i] < p[i + 1] && p[i + 1] < p[i + 2]) || (p[i] == p[i + 2] && p[i] > p[i + 1]))
    {
      ans++;
    }
  }
  cout << ans << endl;
}