#include <bits/stdc++.h>
using namespace std;
double rad;
double PI = acos(-1);
int main()
{
  int a, b, C;
  cin >> a >> b >> C;
  rad = C * PI / 180;
  double c = sqrt(a * a + b * b - 2 * a * b * cos(rad));
  double S = (a * b * sin(rad)) / 2;
  printf("%.8lf\n", S);
  printf("%.8lf\n", (a + b + c));
  double h = (2 * S) / a;
  printf("%.8lf\n", h);
}
