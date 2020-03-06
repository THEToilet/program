#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  int a, b, c;
  int sum = 0;
  cin >> n >> x;
  while (n != 0 || x != 0)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        for (int k = 0; k < n; k++)
        {
          if ((i + 1 + j + 1 + k + 1) == x)
          {
            if (i != j && i != k && j != k)
            {
              sum++;
            }
          }
        }
      }
    }
    cout << sum / 6 << endl;  // 合計は3!*個数分多いので割る
    sum = 0;
    cin >> n >> x;
  }
}