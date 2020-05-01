#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  int count = 0;
  int x = 0;
  rep(i, S.size())
  {

    if (S.at(i) == 'I')
    {
      count++;
    }
    else
    {
      count--;
    }
    x = max(x, count);
  }
  cout << x << endl;
  return 0;
}