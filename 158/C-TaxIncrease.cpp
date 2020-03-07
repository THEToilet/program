#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A, B;
  int a, b;
  cin >> A >> B;
  for (int i = 1; i < 1100; i++)
  {
      a = i * 0.08;
      b = i * 0.1;
      a = floor(a);
      b = floor(b);
    if (a == A && b == B)
    {
      cout << i << "\n";
      return 0;
    }
  }
  cout << -1 << "\n";
}