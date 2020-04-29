#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  ll x;
  cin >> x;
  vector<int> a(N);
  rep(i, N)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int counter = 0;
  for (int i = 0; i < N; i++)
  {
    if (x >= a[i])
    {
      x -= a[i];
      counter++;
    }
  }
  if (counter == N && x > 0)
  {
    counter--;
  }
  cout << counter << endl;
  return 0;
}