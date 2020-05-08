#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  int sum = A + B + C;
  int x = max(A, max(B, C));
  if (x * 3 % 2 == sum % 2)
  {
    cout << (x * 3 - sum) / 2 /*毎回2ずつ増えるため*/<< endl;
  }
  else
  {
    cout << ((x + 1) * 3 - sum) / 2 << endl;
  }
  return 0;
}