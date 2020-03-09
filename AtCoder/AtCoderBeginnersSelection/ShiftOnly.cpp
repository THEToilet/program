#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, A[200];
  int point = 0;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (A[i] % 2 != 0)
    {
      cout << 0 << "\n";
      return 0;
    }
  }
  while (1)
  {
    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 != 0)
      {
        cout << point << "\n";
        return 0;
      }
      A[i] = A[i] / 2;
    }
    point++;
  }
}