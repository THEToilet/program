#include <bits/stdc++.h>
using namespace std;
int main()
{
  // A/B の切り上げは A+B−1 /B の商と等しいらしい
  int N, D;
  cin >> N >> D;
  cout << ((N + D *2) / (2 * D + 1)) << endl;
}