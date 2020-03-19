#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  if (A == B && B != C)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (B == C && A != B)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (A == C && C != B)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
  }
}