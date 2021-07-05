#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s;
  cin >> s;
  int a, b, c, d;
  vector<char> s2(s.size() + 4);
  queue<char> result;
  cin >> a >> b >> c >> d;
  b++;
  c += 2;
  d += 3;
  int index = 0;
  rep(i, s.size() + 4)
  {
    if (i == a || i == b || i == c || i == d)
    {
      result.push('"');
    }
    else
    {
      result.push(s.at(index));
      index++;
    }
  }
  while (!result.empty())
  {
    char tmp = result.front();
    cout << tmp;
    result.pop();
  }
  cout << endl;
  return 0;
}