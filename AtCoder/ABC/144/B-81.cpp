#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  if (N <= 81)
  {
    for (int i = 0; i < 9; i++)
    {
      for (int j = 0; j < 9; j++)
      {
        if (((i + 1) * (j + 1)) == N)
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
