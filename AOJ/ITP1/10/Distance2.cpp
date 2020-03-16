#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int x[101];
  int y[101];
  double d = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> y[i];
  }
  for (int i = 0; i < n; i++)
  {
    d = abs(x[i] - y[i]);
    d1 += d;
    d2 += pow(d, 2);
    d3 += pow(d, 3);
    if (d4 < d)
    {
      d4 = d;
    }
  }
  d2 = sqrt(d2);
  d3 = pow(d3, (1.0 / 3.0));
  printf("%.8lf", d1);
  cout << "\n";
  printf("%.8lf", d2);
  cout << "\n";
  printf("%.8lf", d3);
  cout << "\n";
  printf("%.8lf", d4);
  cout << "\n";
}