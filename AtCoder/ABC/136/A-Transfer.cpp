#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  int D = C - (A - B);
  if (D < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << D << endl;
  }
}