#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  char str[222];
  scanf("%s", str);
  int n = strlen(str);
  for (int i = n - 2; i; i -= 2)
  {
    if (strncmp(str, str + i / 2, i / 2) == 0)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}