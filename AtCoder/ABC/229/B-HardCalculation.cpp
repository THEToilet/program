#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  bool answer = false;
  if (stoll(a, nullptr, 10) > stoll(b, nullptr, 10))
  {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (long unsigned int i = 0; i < b.size(); i++)
    {
      int s = a.at(i) - '0';
      int t = b.at(i) - '0';
      if (s + t >= 10)
      {
        answer = true;
      }
    }
  }
  else if (stoll(a, nullptr, 10) <= stoll(b, nullptr, 10))
  {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (long unsigned int i = 0; i < a.size(); i++)
    {
      int s = a.at(i) - '0';
      int t = b.at(i) - '0';
      if (s + t >= 10)
      {
        answer = true;
      }
    }
  }

  if (answer)
  {
    cout << "Hard" << endl;
  }
  else
  {
    cout << "Easy" << endl;
  }

  return 0;
}