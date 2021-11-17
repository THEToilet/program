#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  char a, b, c;
  a = s.at(s.size() - 1);
  b = s.at(s.size() - 2);
  if (s.size() == 2 || (a == 'r' && b == 'e'))
  {
    cout << "er" << endl;
    return 0;
  }
  else
  {
    cout << "ist" << endl;
    return 0;
  }

  return 0;
}