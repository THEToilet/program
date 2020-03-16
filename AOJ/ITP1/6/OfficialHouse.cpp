#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int b, f, r, v, n;
  int count[4][3][10];
  string line = "####################";
  cin >> n;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 10; k++)
      {
        count[i][j][k] = 0;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b >> f >> r >> v;
    count[b - 1][f - 1][r - 1] += v;
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 10; k++)
      {
        cout << " " << count[i][j][k];
      }
      cout << endl;
    }
    if (i != 3)
    {
      cout << line << endl;
    }
  }
}