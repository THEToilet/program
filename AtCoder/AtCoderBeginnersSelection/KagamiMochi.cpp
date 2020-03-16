#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int a;
  int max;
  int point = 1;
  vector<int> d;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    d.push_back(a);
  }

  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());

  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      max = d[i];
    }
    if (max > d[i])
    {
      max = d[i];
      point++;
    }
  }
  cout << point << endl;
}