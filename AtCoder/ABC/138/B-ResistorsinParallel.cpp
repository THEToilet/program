#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  vector<int> A;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }
  double ans;
  for (int i = 0; i < N; i++)
  {
    ans += (1.0 / A.at(i));
  }
  printf("%.8lf", 1.0 / ans);
}