#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  while (1)
  {
    if (C - B <= 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    else if (A - D <= 0)
    {
      cout << "No" << endl;
      return 0;
    }
    A = A - D;
    C = C - B;
   // printf("A:C %d:%d", A, C);
  }
  return 0;
}