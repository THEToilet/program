#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  map<int, int> m;
  rep(i, n)
  {
    cin >> a.at(i);
  }
  int count = 0;
  while (m[x] == 0)
  {
    m[x]++;
    x = a.at(x - 1);
    count++;
  }
  cout << count << endl;
  return 0;
}