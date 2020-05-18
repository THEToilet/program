#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<ll, int> A;
  rep(i, N)
  {
    ll tmp;
    cin >> tmp;
    A[tmp]++;
  }
  ll count = 0;
  for (auto a : A)
  {
    if (a.second % 2 != 0)
    {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}