#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  unsigned long int Y;
  unsigned long int sum;
  cin >> N >> Y;
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j + i <= N; j++)
    {
      int k = N - i - j;
      sum = 10000 * i + 5000 * j + 1000 * k;
      if ((i + j + k) == N && sum == Y)
      {
        cout << i << " " << j
             << " " << k << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1
       << " " << -1 << endl;
  return 0;
}
