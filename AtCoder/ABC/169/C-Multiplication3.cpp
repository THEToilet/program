#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  ll A;
  double B;
  cin >> A >> B;
  ll tmp = A * B;
  string t = to_string(tmp);
  int count = 0;
  for (long unsigned int i = 0; i < t.size(); i++)
  {
    if (t.at(i) == '.')
      count = i;
  }
  if (count == 0)
  {
    cout << t << endl;
  }
  else
  {
    cout << t.substr(0, count) << endl;
  }

  return 0;
}