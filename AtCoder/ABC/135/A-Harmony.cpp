#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int A, B;
  cin >> A >> B;
  if (A %2 != B %2)
  {
    cout << "IMPOSSIBLE" << endl;
  }
  else
  {
    long long int ans = (A + B) / 2;
    cout << ans << endl;
  }
}