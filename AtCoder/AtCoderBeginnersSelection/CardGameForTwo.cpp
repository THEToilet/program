#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int maxN;
  int alice = 0, bob = 0;
  int a;
  cin >> N;
  vector<int> v;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (int i = 0; i < N; i++)
  {
    (i % 2 == 0)
        ? alice += v[i]
        : bob += v[i];
    // printf("%d:%d\n", alice, bob);
  }
  printf("%d\n", alice - bob);
}