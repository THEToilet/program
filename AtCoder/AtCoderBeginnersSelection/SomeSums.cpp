#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, A, B;
  int add = 0;
  int sum = 0;
  /* 各桁の数字 */
  int dig;
  cin >> N >> A >> B;
  for (int i = A; i <= N; i++)
  {
    int tmp = i;
    while (tmp != 0)
    {
      dig = tmp % 10;
      add = add + dig;
      tmp = tmp / 10;
    }

    if (A <= add && add <= B)
    {
     // cout << i << endl;
      sum += i;
    }
    add = 0;
  }
  cout << sum << "\n";
}