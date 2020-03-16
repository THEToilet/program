#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, l, k = 0;
  int A[101][101], B[101][101];
  long int C[101][101];
  for (int i = 0; i < 101; i++)
  {
    for (int j = 0; j < 101; j++)
    {
      C[i][j] = 0;
    }
  }
  cin >> n >> m >> l;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < l; j++)
    {
      cin >> B[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < l; j++)
    {
      for (int k = 0; k < m; k++)
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < l; j++)
    {
      if (j == (l - 1))
      {
        cout << C[i][j] << endl;
      }
      else
      {
        cout << C[i][j] << " ";
      }
    }
  }
}