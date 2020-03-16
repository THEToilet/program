#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long int H, W;
  cin >> H >> W;
  unsigned long long int a = H * W;

  if (a % 2 == 0)
  {
    a = a >> 1;
    cout << floor(a) << endl;
  }
  else
  {
    a = a >> 1;
    cout << floor(a + 1) << endl;
  }
}