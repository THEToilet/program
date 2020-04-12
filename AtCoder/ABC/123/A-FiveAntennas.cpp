#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int k;
  vector<int> a(5);
  rep(i, 5)
  {
    cin >> a[i];
  }
  cin >> k;
  if (a[4] - a[0] <= k)
  {
    cout << "Yay!" << endl;
  }
  else
  {
    cout << ":(" << endl;
  }
}