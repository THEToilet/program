#include <bits/stdc++.h>
using namespace std;
int main()
{
  int r, D, x;
  int Dx;
  cin >> r >> D >> x;
  for (int i = 0; i < 10; i++)
  {
    if (i == 0)
    {
      Dx = r * x - D;
    }
    else
    {
      Dx = r * Dx - D;
    }
    cout << Dx << endl;
  }
}