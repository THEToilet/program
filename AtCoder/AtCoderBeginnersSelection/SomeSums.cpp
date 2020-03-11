#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, A, B;
  int add;
  int sum = 0;
  /* 各桁の数字 */
  int dig;
  cin >> N >> A >> B;
  for (int i = A; i <= N; i++)
  {
    while (i != 0)
    {
      dig = i % 10;
      add = add + dig;
      i = i / 10;
      cout << i << endl;
    }

    if (A <= add && add >= B)
    {
      sum += i;
    }
  }
  cout << sum << "\n";
}