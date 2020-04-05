#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  int outlet = 1;
  int ans = 0;
  while (outlet < B)
  {
    outlet--;
    outlet += A;
    ans++;
  }
  cout << ans << endl;
}