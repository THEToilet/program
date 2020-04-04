#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  if (N == 1)
  {
    printf("%.10lf", 1.0);
  }
  else if (N % 2 == 0)
  {
    double a = (N / 2.0) / N;
    printf("%.10lf", a);
  }
  else
  {
    double b = ceil((N / 2.0)) / N;
    printf("%.10lf", b);
  }
}