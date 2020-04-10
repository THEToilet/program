#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  if (A == B)
  {
    cout << A + B << endl;
  }
  else if (A > B)
  {
    int ans = max(A - 1, B) + A;
    cout << ans << endl;
  }
  else
  {
    int ans = max(A, B - 1) + B;
    cout << ans << endl;
  }
}