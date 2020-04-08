#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  int P;
  pair<pair<string, int>, int> p[110];
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> S >> P;
    p[i] = make_pair(make_pair(S, -P), i);
  }
  sort(p, p + N);
  for (int i = 0; i < N; i++)
    printf("%d\n", p[i].second + 1);
}