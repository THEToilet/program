#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  long int A, B;
  cin >> A >> B;
  // 最小公倍数
  for (int i = 1; i <= B; i++)
  {
    if ((A * i) % B == 0)
    {
      cout << A * i << endl;
      break;
    }
  }
  return 0;
}