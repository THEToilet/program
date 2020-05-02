#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  if (a.size() > b.size())
  {
    cout << "GREATER" << endl;
  }
  else if (a.size() < b.size())
  {
    cout << "LESS" << endl;
  }
  else
  {
    if (a == b)
    {
      cout << "EQUAL" << endl;
    }
    else if (a < b)
    {
      cout << "LESS" << endl;
    }
    else
    {
      cout << "GREATER" << endl;
    }
  }
  return 0;
}