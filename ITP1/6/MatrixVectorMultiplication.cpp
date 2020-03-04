#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n, m;
  int A[101][101];
  int b[101][1];
  int c[101][1];
  for (int i = 0; i < 101; i++)
  {
    c[i][1] = 0;
  }
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i][1];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      c[i][1] += A[i][j] * b[j][1];
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << c[i][1] << endl;
  }
}