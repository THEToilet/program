#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A[3][3], N, b;
  bool bingo = false;
  cin >> A[0][0] >> A[0][1] >> A[0][2];
  cin >> A[1][0] >> A[1][1] >> A[1][2];
  cin >> A[2][0] >> A[2][1] >> A[2][2];
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> b;
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        if (A[j][k] == b)
        {
          A[j][k] = -1;
        }
      }
    }
  }
  for (int i = 0; i < 3; i++)
  {
    if (A[i][0] == -1 && A[i][1] == -1 && A[i][2] == -1)
    {
      bingo = true;
    }
  }
  for (int i = 0; i < 3; i++)
  {
    if (A[0][i] == -1 && A[1][i] == -1 && A[2][i] == -1)
    {
      bingo = true;
    }
  }
  if (A[0][0] == -1 && A[1][1] == -1 && A[2][2] == -1)
  {
    bingo = true;
  }
  if (A[0][2] == -1 && A[1][1] == -1 && A[2][0] == -1)
  {
    bingo = true;
  }

  if (bingo)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}