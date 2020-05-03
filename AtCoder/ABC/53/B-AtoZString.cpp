#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  int isA = 0;
  int isB = 0;
  rep(i, s.size())
  {
    if (s.at(i) == 'A')
    {
      isA = i;
      break;
    }
  }
  for (int i = s.size() - 1; i > 0; i--)
  {
    if (s.at(i) == 'Z')
    {
      isB = i;
      break;
    }
  }
  cout << isB - isA + 1 << endl;
  return 0;
}