#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<int, int> A;
  rep(i, N)
  {
    int a;
    cin >> a;
    A[a] += 1;
  }

  for (const auto &x : A)
  {
    int v = x.second;
    if (v > 1)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}