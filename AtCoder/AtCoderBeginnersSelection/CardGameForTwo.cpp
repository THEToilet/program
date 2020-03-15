#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int maxN;
  int alice = 0, bob = 0;
  int endpoint = 0;
  int a;
  cin >> N;
  vector<int> v;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  for (int j = 0; v.size() >= endpoint; j++)
  {
    int max;
    for (int i = 0; i < v.size(); i++)
    {
      if (i == 0)
      {
        max = v.at(0);
        maxN = 0;
      }
      if (max < v.at(i))
      {
        max = v.at(i);
        maxN = i;
      }
      if (v.at(i) == 0)
      {
        endpoint++;
      }
    }
    (j % 2 == 0)
        ? alice += max
        : bob += max;
    v.at(maxN) = 0;
   // printf("%d:%d\n", alice, bob);
  }
  printf("%d\n", alice - bob);
}