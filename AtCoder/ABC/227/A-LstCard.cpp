#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n, k, a;
  cin >> n >> k >> a;
  int tmp = 0;
  if (k < n)
  {
    tmp = k;
  }
  else
  {
    tmp = (k % n);
  }
  //cout << tmp << endl;
  if (n == 1)
  {
    cout << 1 << endl;
  }
  else if (n < a + tmp - 1)
  {
    cout << (a + tmp - 1) - n << endl;
  }
  else
  {
    cout << a + tmp - 1 << endl;
  }
  return 0;
}