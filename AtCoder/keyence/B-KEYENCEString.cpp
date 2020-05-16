#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string str;
  string target = "keyence";
  cin >> str;
  if (str == target)
  {
    puts("YES");
    return 0;
  }
  int n = str.size();
  rep(i, n)
  {
    for (int j = i; j < n; j++)
    {
      string S = "";
      for (int k = 0; k < n; k++)
      {
        if (i <= k && k <= j)
        {
          continue;
        }
        else
          S.push_back(str[k]);
      }
      if (S == target)
      {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
  return 0;
}