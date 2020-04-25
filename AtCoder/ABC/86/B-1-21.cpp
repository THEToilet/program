#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  string tmp  = a + b;
  int num = atoi(tmp.c_str());
  for (int i = 0; i < 1000; i++)
  {
    if (i * i == num)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}