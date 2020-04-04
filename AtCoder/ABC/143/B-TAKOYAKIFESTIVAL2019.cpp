#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int ans = 0;
  vector<int> d;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    d.push_back(a);
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      ans += d.at(i) * d.at(j);
    }
  }
  cout << ans << endl;
}