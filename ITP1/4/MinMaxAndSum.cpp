#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, min, max;
  long long int sum = 0;
  bool first = true;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a);
    sum = sum + a;
    if (first)
    {
      min = a;
      max = a;
      first = false;
    }
    if (a < min)
    {
      min = a;
    }
    if (a > max)
    {
      max = a;
    }
  }
  cout << min << " " << max << " " << sum << endl;
}